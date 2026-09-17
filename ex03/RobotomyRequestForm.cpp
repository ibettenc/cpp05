/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:00 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/17 17:06:33 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

/* Constructor*/
RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

/* Copy-constructor */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), _target(other._target)
{
}

/* Assignment operator */
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        // On ne peut pas modifier _target car il est const.
        // Rien à faire ici.
    }
    return (*this);
}

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm()
{
}

/* Member functions */
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw AForm::NotSignedException();

    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "Brrrrr brrrrr " << std::endl;

    int result = rand() % 2;
    if (result == 1)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has been robotomized failed" << std::endl;
}