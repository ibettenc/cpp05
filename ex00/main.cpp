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
        // Bureaucrat b1("Bob", 151); // it prints an error
        // Bureaucrat b2("Lucia", 0); // it prints an error

        Bureaucrat b3("Jules", 1);
        std::cout << b3.getName() << ", grade : " << b3.getGrade() << std::endl;
        std::cout << std::endl;

        Bureaucrat b4("Tina", 150); 
        std::cout << b4 << std::endl; // using the << operator as mentioned in the subject
        std::cout << std::endl;


        // b3.increase(); // it prints an error
        b3.decrease();
        std::cout << b3 << std::endl;

        b4.increase();
        std::cout << b4 << std::endl;

        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Error : " <<  e.what() << std::endl;
    }
    
    return 0;
}

