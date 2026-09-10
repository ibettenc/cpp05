/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:42:07 by marvin            #+#    #+#             */
/*   Updated: 2026/09/05 12:42:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    private :
        const std::string _name;
        bool _isSigned;
        const int _requiredGradeToSign;
        const int _requiredGradeToExecute;
    
    public :
        /* Canonical Form */
        Form(const std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        /* Exceptions */
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

        /* Getters */
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        /* Members functions */
        void beSigned(const Bureaucrat& bureaucrat);

        /* Operator function */
        friend std::ostream& operator<<(std::ostream& os, const Form& form);
};