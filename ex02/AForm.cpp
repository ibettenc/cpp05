/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:42:10 by marvin            #+#    #+#             */
/*   Updated: 2026/09/05 12:42:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructor
AForm::AForm(const std::string name, int requiredGradeToSign, int requiredGradeToExecute)
    : _name(name), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute)
{
    if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
        throw GradeTooHighException();
    else if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
        throw GradeTooLowException();
    else
    {
        std::cout << "AForm : " << name << " has been successfully constructed" << std::endl;
    }
}

// Copy Constructor
AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned), _requiredGradeToSign(other._requiredGradeToSign), _requiredGradeToExecute(other._requiredGradeToExecute)
{
    std::cout << "AForm " << _name << " has been copy-constructed" << std::endl;
}

// Destructor
AForm::~AForm()
{
    std::cout << "AForm : " << _name << " has been destroyed" << std::endl;
}

// Assignment Operator
AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        // Only non-const members can be assigned
        _isSigned = other._isSigned;
    }
    return (*this);
}

/* Getters */
std::string AForm::getName() const
{
    return _name;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

int AForm::getGradeToSign() const
{
    return _requiredGradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _requiredGradeToExecute;
}

/* Member functions */
void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _requiredGradeToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

void checkExecution(Bureaucrat const & executor) const
{
    if (!_isSigned) 
        throw NotSignedException();
    if (executor.getGrade() >= _requiredGradeToExecute)
        throw GradeTooLowException();
}

virtual void AForm::execute(Bureaucrat const & excecutor) const = 0
{
    // nothing bc it needs to be not instantiable
}

/* Friend function: operator<< */
std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
    os << "AForm " << Aform.getName() 
       << ", signed status: " << (Aform.getIsSigned() ? "true" : "false") 
       << ", required sign grade: " << Aform.getGradeToSign() 
       << ", required exec grade: " << Aform.getGradeToExecute();
    return os;
}
