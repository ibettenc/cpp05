/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:07:58 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/14 18:27:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string const _target;
    
    public :
            /* Canonical form */
            PresidentialPardonForm(std::string const & target);
            PresidentialPardonForm(const PresidentialPardonForm& other);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
            ~PresidentialPardonForm();

            /* Member functions */
            virtual void execute(Bureaucrat const & executor) const;
            
};