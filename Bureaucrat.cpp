/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:58:14 by ibettenc          #+#    #+#             */
/*   Updated: 2026/06/25 15:26:03 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int Bureaucrat::getGrade()
{
    int g = grade;
    return g;
}

string Bureaucrat::getName()
{
    string n = name;
    return n;
}

// Bureaucrat::Bureaucrat()
// {
//     string  name = "";
//     int     grade = 0;
// }

Bureaucrat::Bureaucrat(string name, int grade)
{
    string  name = getName();
    int     grade = getGrade();
}

void Bureaucrat::GradeTooHighExeption()
{
    
}

void Bureaucrat::GradeTooHLowExeption()
{
    
}

int IncrementGrade(int grade, string namme)
{
    try
    {
        grade++;
    }
    catch (std::exepction & e)
    {
        std::cout << getName() << " cannot increment grade" << endl;
    }
}

int DecrementGarde()
{
    
}