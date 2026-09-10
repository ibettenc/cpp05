/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:00 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/10 19:37:43 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Canonical form */
RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : _target(target)
{
    if (this.requiredGradeToSign < 72 && this.requiredGradeToExecute < 45)
        throw GradeTooLowException();
    // constructor message
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : _target(target)
{
    // copy-constructor message
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != other)
        this._target = other._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
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
        // RobotomyRequestForm action
    }
}