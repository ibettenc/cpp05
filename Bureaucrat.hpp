/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:58:26 by ibettenc          #+#    #+#             */
/*   Updated: 2026/06/25 15:18:32 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Bureaucrat
{
  private:
    const   string name;
    int     grade;
    
  public:
    Bureaucrat(string name, int grade);
    ~Bureaucrat();
    void    GradeTooHighExeption();
    void    GradeTooHLowExeption();
    int     IncrementGrade();
    int     DecrementGarde();
    string  getName();
    int     getGrade();
};