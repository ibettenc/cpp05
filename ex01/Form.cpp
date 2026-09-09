/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:42:10 by marvin            #+#    #+#             */
/*   Updated: 2026/09/05 12:42:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor
Form::Form(const std::string name, int requiredGradeToSign, int requiredGradeToExecute)
    : _name(name), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute)
{
    if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
        throw GradeTooHighException();
    else if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
        throw GradeTooLowException();
    else
    {
        std::cout << "Form : " << name << " has been successfully constructed" << std::endl;
    }
}

// Copy Constructor
Form::Form(const Form& other)
    : _name(other._name), _isSigned(other._isSigned), _requiredGradeToSign(other._requiredGradeToSign), _requiredGradeToExecute(other._requiredGradeToExecute)
{
    std::cout << "Form " << _name << " has been copy-constructed" << std::endl;
}

// Destructor
Form::~Form()
{
    std::cout << "Form : " << _name << " has been destroyed" << std::endl;
}

// Assignment Operator
Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        // Only non-const members can be assigned
        _isSigned = other._isSigned;
    }
    return (*this);
}

/* Getters */
std::string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _requiredGradeToSign;
}

int Form::getGradeToExecute() const
{
    return _requiredGradeToExecute;
}

/* Member functions */
void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _requiredGradeToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

/* Friend function: operator<< */
std::ostream& operator<<(std::ostream& os, const Form& form) // a revoir
{
    os << "Form " << form.getName() 
       << ", signed: " << (form.getIsSigned() ? "true" : "false") 
       << ", required sign grade: " << form.getGradeToSign() 
       << ", required exec grade: " << form.getGradeToExecute();
    return os;
}
