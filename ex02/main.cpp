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

int main()
{
    try 
    {
        
        Bureaucrat b1("Jules", 5);
        
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
        // AForm f1("form1", 5, 5); // should print an error abstract class
        // AForm f2("form2", 1, 1); // should print an error abstract class
        // AForm f3("f3", 0, 1); // should print an error
        // AForm f4("f4", 151, 1); // should print an error
        // AForm f5("f5", 1, 0); // should print an error
        // AForm f6("f6", 1, 151); // should print an error
        // AForm f7("f7", -1, 1); // should print an error
        // AForm f8("f8", 1, -1); // should print an error
        std::cout << std::endl;

        // std::cout << "Form name : " << f1.getName()
        //     << ", Signed status : " << f1.getIsSigned()
        //     << ", Required grade to excecute : " << f1.getGradeToExecute()
        //     << ", Required grade to sign : " << f1.getGradeToSign()
        //     << std::endl;
        std::cout << std::endl;

        // std::cout << f1 << std::endl; // using the << operator as mentioned in the subject + the signed status should be false
        std::cout << std::endl;

        // b1.signAForm(f1);
        // b1.signAForm(f2); // b1 should fail to sign the Aform 
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

