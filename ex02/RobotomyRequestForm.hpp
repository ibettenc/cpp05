/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:06 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/10 19:35:58 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
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
            
}