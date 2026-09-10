/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:09:41 by marvin            #+#    #+#             */
/*   Updated: 2026/09/01 15:09:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat(std::string const n, int g);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("Grade too high");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("Grade too low");
            }
    };
    friend std::ostream& operator<<(std:: ostream& os, const Bureaucrat& b);
    
    /* Getters */
    std::string getName() const;
    int getGrade() const;

    /* Member functions */
    void increase();
    void decrease();
    void signForm(AForm& form);
    void executeForm(AForm const & form);
    
};
