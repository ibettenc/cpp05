/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:07:58 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/11 13:05:37 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

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