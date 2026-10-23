/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:18:57 by ibettenc          #+#    #+#             */
/*   Updated: 2026/10/23 13:49:22 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class AForm;

class Intern
{
    private :
        
    public :
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        class WrongNameException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Wrong name");
                }
        };
        AForm* makeForm(std::string const& form_name, std::string const& form_target);
        
};

#endif