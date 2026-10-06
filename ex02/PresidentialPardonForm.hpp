/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:07:58 by ibettenc          #+#    #+#             */
/*   Updated: 2026/10/06 15:50:45 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

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

#endif