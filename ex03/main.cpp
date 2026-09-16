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


        // // b3.increase(); // should print an error
        // b3.decrease();
        // std::cout << b3 << std::endl;

        // b4.increase();
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
        AForm* form_ptr = NULL;
        try
        {
            form_ptr = randomIntern.makeForm("shrubbery creation", "random shrub");
            // std::cout << form_ptr << std::endl; comment les afficher ?
            std::cout << std::endl;
            form_ptr = randomIntern.makeForm("robotomy request", "random robot");
            // std::cout << form_ptr << std::endl; comment les afficher ?
            std::cout << std::endl;
            form_ptr = randomIntern.makeForm("presidential pardon", "random begging");
            // std::cout << form_ptr << std::endl; comment les afficher ?
            std::cout << std::endl;
            
            delete form_ptr;
            form_ptr = NULL;
            
        }
        catch (std::exception& e)
        {
            std::cout << "Global Error: " << e.what() << std::endl;
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Global Error: " <<  e.what() << std::endl;
    }
    
    return 0;
}

