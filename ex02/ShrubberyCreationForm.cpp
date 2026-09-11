/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:08:02 by ibettenc          #+#    #+#             */
/*   Updated: 2026/09/11 13:50:44 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/* Constructeur */
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

/* Constructeur de copie */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target)
{
}

/* Opérateur d'affectation */
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        // _target est const, on ne peut pas le modifier.
    }
    return (*this);
}

/* Destructeur */
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/* Fonction execute */
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw AForm::NotSignedException();

    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::string fileName = this->_target + "_shrubbery";
    std::ofstream outFile(fileName.c_str());

    if (outFile.is_open())
    {
        outFile << "      _._" << std::endl;
        outFile << "     _-.-'" << std::endl;
        outFile << "    _-  -._" << std::endl;
        outFile << "   /  _    -._" << std::endl;
        outFile << "  /  _  _    -._" << std::endl;
        outFile << " /   _  _    -._" << std::endl;
        outFile << "|   _  _    -._" << std::endl;
        outFile << "|  _  _    -._" << std::endl;
        outFile << "| _  _    -._" << std::endl;
        outFile << "|_ _    -._" << std::endl;
        outFile << "| _    -._" << std::endl;
        outFile << "|_    -._" << std::endl;
        outFile << "|_    -._" << std::endl;
        outFile << "|_    -._" << std::endl;
        outFile << "|_    -._" << std::endl;
    }
}