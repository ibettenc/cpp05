/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:07:53 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/11 13:46:12 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Constructeur */
PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

/* Constructeur de copie */
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), _target(other._target)
{
}

/* Opérateur d'affectation */
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        // On ne peut pas modifier _target car il est const.
    }
    return (*this);
}

/* Destructeur */
PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* Fonction execute */
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}