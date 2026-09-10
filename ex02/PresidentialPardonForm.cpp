/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:07:53 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/10 19:37:32 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Canonical form */
PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : _target(target)
{
    if (this.requiredGradeToSign < 25 && this.requiredGradeToExecute < 5)
        throw GradeTooLowException();
    // constructor message
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : _target(target)
{
    // copy-constructor message
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != other)
        this._target = other._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
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
        // PresidentialPardonForm action
    }
}