/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:02 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/10 19:35:03 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Canonical form */
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : _target(target)
{
    if (this.requiredGradeToSign < 145 && this.requiredGradeToExecute < 137)
        throw GradeTooLowException();
    // constructor message
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : _target(target)
{
    // copy-constructor message
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != other)
        this._target = other._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // destructor message
}

virtual void execute(Bureaucrat const & executor) const
{
    if (!this.getIsSigned()) 
        throw NotSignedException();
    if (executor.getGrade() >= this.getGradeToExecute())
        throw GradeTooLowException();
    else
    {
        // ShrubberyCreationForm action
    }
}