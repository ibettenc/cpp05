/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
    private :
        const std::string _name;
        bool _isSigned;
        const int _requiredGradeToSign;
        const int _requiredGradeToExecute;
    
    public :
        /* Canonical form */
        AForm(const std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();

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
        class NotSignedException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Form is not signed");
                }
        };

        /* Getters */
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        /* Members functions */
        void beSigned(const Bureaucrat& bureaucrat);
        void checkExecution(Bureaucrat const & executor) const;
        virtual void execute(Bureaucrat const & excecutor) const = 0; // pure virtual function for abtract class
        /* Operator function */
        friend std::ostream& operator<<(std::ostream& os, const AForm& Aform);
};