/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:59:49 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/02 20:56:38 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_utils.hpp"

int main()
{
    Phonebook   ph;
	std::string str;

    std::cout << std::endl << "Available commands are: ";
    std::cout << "'ADD' 'SEARCH' and 'EXIT'" << std::endl << std::endl;
    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, str);
        if (str == "ADD")
            ph.add();
        else if (str == "SEARCH")
            ph.seach();
        else if (str == "EXIT")
        {
            std::cout << std::endl;
            return (0);
        }
        if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
    }
    return (0);
}
