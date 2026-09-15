/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:06 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/14 18:27:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        std::string const _target;
    
    public :
            /* Canonical form */
            RobotomyRequestForm(std::string const & target);
            RobotomyRequestForm(const RobotomyRequestForm& other);
            RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
            ~RobotomyRequestForm();

            /* Member functions */
            virtual void execute(Bureaucrat const & executor) const;
            
};