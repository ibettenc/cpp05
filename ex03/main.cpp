/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:09:43 by marvin            #+#    #+#             */
/*   Updated: 2026/09/01 15:09:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // initialisation random for robotomy
    srand(static_cast<unsigned int>(time(NULL)));
    try 
    {
        //---- OLD TESTS ----//
        // Bureaucrat b2("Bob", 151); // should print an error
        // Bureaucrat b3("Lucia", 0); // should print an error

        
        // std::cout << b3.getName() << ", grade : " << b3.getGrade() << std::endl;
        // std::cout << std::endl;

        // Bureaucrat b4("Tina", 150); 
        // std::cout << b4 << std::endl; // using the << operator as mentioned in the subject
        // std::cout << std::endl;


        // // b3.increment(); // should print an error
        // b3.decrement();
        // std::cout << b3 << std::endl;

        // b4.increment();
        // std::cout << b4 << std::endl;

        //---- NEW TESTS ----//
        Bureaucrat b1("Jules", 5);
        Bureaucrat b2("Alex", 150);

        ShrubberyCreationForm shrub("MyGarden");
        RobotomyRequestForm robot("Target");
        PresidentialPardonForm pardon("President");
        std::cout << std::endl;

        // AForm f1("form1", 5, 5); // should not compile : error abstract class
        // AForm f2("form2", 0, 0); // should not compile : error abstract class

        // using the << operator as mentioned in the subject + the signed status should be false at the creation
        std::cout << "Forms created :" << std::endl;
        std::cout << shrub << std::endl;
        std::cout << robot << std::endl;
        std::cout << pardon << std::endl;
        std::cout << std::endl;

        // Succeed to sign forms
        b1.signForm(shrub);
        b1.signForm(robot);
        b1.signForm(pardon);
        std::cout << std::endl;

        // Show the signed status (should be true)
        std::cout << shrub << std::endl;
        std::cout << robot << std::endl;
        std::cout << pardon << std::endl;
        std::cout << std::endl;

        // Succeed to Execute forms
        b1.executeForm(shrub);
        std::cout << std::endl;
        b1.executeForm(robot);
        std::cout << std::endl;
        b1.executeForm(pardon);
        std::cout << std::endl;

        // Fail to sign forms
        b2.signForm(shrub);
        b2.signForm(robot);
        b2.signForm(pardon);
        std::cout << std::endl;

        // Fail to execute forms
        b2.executeForm(shrub);
        b2.executeForm(robot);
        b2.executeForm(pardon);        
        std::cout << std::endl;

        Intern randomIntern;
        AForm* form1 = NULL;
        AForm* form2 = NULL;
        AForm* form3 = NULL;
        AForm* wrong_form = NULL;
        try
        {
            form1 = randomIntern.makeForm("shrubbery creation", "random shrub");
            std::cout << *form1 << std::endl;
            std::cout << std::endl;

            form2 = randomIntern.makeForm("robotomy request", "random robot");
            std::cout << *form2 << std::endl;
            std::cout << std::endl;

            form3 = randomIntern.makeForm("presidential pardon", "random begging");
            std::cout << *form3 << std::endl;
            std::cout << std::endl;

            wrong_form = randomIntern.makeForm("bla bla bla", "random wrong");
            std::cout << *wrong_form << std::endl;
            std::cout << std::endl;
            
            delete form1;
            delete form2;
            delete form3;
            delete wrong_form;
            form1 = NULL;
            form2 = NULL;
            form3 = NULL;
            wrong_form = NULL;
            
        }
        catch (std::exception& e)
        {
            std::cout << "Global Error: " << e.what() << std::endl;
            delete form1;
            delete form2;
            delete form3;
            delete wrong_form;
            form1 = NULL;
            form2 = NULL;
            form3 = NULL;
            wrong_form = NULL;
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Global Error: " <<  e.what() << std::endl;
    }
    
    return 0;
}

