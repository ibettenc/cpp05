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

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
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

        ShrubberyCreationForm shrub("MyGarden");
        RobotomyRequestForm robot("Target");
        PresidentialPardonForm pardon("President");
        std::cout << std::endl;

        // AForm f1("form1", 5, 5); // should not compile : error abstract class
        // AForm f2("form2", 0, 0); // should not compile : error abstract class

        std::cout << "Forms created : :" << std::endl;
        std::cout << shrub << std::endl;
        std::cout << robot << std::endl;
        std::cout << pardon << std::endl;
        std::cout << std::endl;

        

        // using the << operator as mentioned in the subject + the signed status should be false at the creation
        std::cout << shrub << std::endl;
        std::cout << robot << std::endl; 
        std::cout << pardon << std::endl;
        std::cout << std::endl;


        // b1.signForm(f1);
        // b1.signForm(f2); // b1 should fail to sign the Aform 
        std::cout << std::endl;

        // std::cout << f1 << std::endl; // the signed status should be true
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Error : " <<  e.what() << std::endl;
    }
    
    return 0;
}

