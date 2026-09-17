/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:19:04 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/17 17:14:38 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern &other)
{
    (void) other;
}

Intern Intern::operator=(const Intern &other)
{
    (void) other;
    return *this;
}

Intern::~Intern()
{
    
}

AForm* Intern::makeForm(std::string const& form_name, std::string const& form_target)
{
    int i = 0;
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    while (i < 3 && forms[i] != form_name)
        i++;
    switch(i)
    {
        case 0 :
            std::cout << "Intern creates " << form_name << std::endl;
            return (new ShrubberyCreationForm(form_target));
        case 1 :
            std::cout << "Intern creates " << form_name << std::endl;
            return (new RobotomyRequestForm(form_target));
        case 2 :
            std::cout << "Intern creates " << form_name << std::endl;
            return (new PresidentialPardonForm(form_target));
        default :
            std::cout << "Target " << form_name << " is not a valid form name" << std::endl;
            throw WrongNameException();
    }

    return 0;
}
