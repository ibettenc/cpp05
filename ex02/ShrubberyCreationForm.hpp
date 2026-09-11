/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:03 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/11 13:49:08 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    private :
        std::string const _target;
    
    public :
            /* Canonical form */
            ShrubberyCreationForm(std::string const & target);
            ShrubberyCreationForm(const ShrubberyCreationForm& other);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
            ~ShrubberyCreationForm();

            /* Member functions */
            virtual void execute(Bureaucrat const & executor) const;
            
};