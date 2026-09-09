/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:09:37 by marvin            #+#    #+#             */
/*   Updated: 2026/09/01 15:09:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const n, int g) : name(n), grade(g)
{
    if (g < 1)
        throw GradeTooHighException();
    else if (g > 150)
        throw GradeTooLowException();
    
    else
    {
        std::cout << "Bureaucrat " << n << ", grade : " << g << " has been successfully constructed" << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    std::cout << "Bureaucrat " << name << " has been copy-constructed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << name << " has been destroyed" << std::endl;
}

std::ostream& operator<<(std:: ostream& os, const Bureaucrat& b)
{
    os << b.name << " , Bureaucrat grade : " << b.grade;
    return (os);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::increase()
{
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}
void Bureaucrat::decrease()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "bureaucrat : " << this->name << " signed form : " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "bureaucrat : 6" << this->name << " couldn't sign form : " <<
            form.getName() << " because " << e.what() << std::endl;
    }
}
