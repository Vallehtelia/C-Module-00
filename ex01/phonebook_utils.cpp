/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 19:00:07 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/02 20:56:29 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_utils.hpp"

Phonebook::Phonebook(void)
{
	this->i = 0;
	std::cout << \
		"Welcome to Crappy!" \
		<< std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Why did the phonebook never go on a date?" << std::endl;
    std::cout << "Because it could never find the right number! Byee!" << std::endl << std::endl;
}

void        Phonebook::get_info(std::string data)
{
    std::string line;

    line = "";
    while (!std::cin.eof() && line == "")
    {
        std::cout << "type " << data << ": ";
        if (std::getline(std::cin, line) && line != "")
        {
            trim(line);
            if (line.size() > 0)
                break ;
        }
    }
    if (data == "firstname")
        this->contact[this->i % 8].set_firstname(line);
    else if (data == "lastname")
        this->contact[this->i % 8].set_lastname(line);
    else if (data == "nickname")
        this->contact[this->i % 8].set_nickname(line);
    else if (data == "darkest secret")
        this->contact[this->i % 8].set_secret(line);
    else if (data == "phone number")
        this->contact[this->i % 8].set_number(line);
}

void        Phonebook::add(void)
{
    if (this->i > 7)
        std::cout << "Phonebook can hold max 8 contacts. Overwriting " << this->contact[this->i % 8].get_firstname() << "'s info" << std::endl;
    get_info("firstname");
    get_info("lastname");
    get_info("nickname");
    get_info("darkest secret");
    get_info("phone number");
    std::cout << "Successfully added " << this->contact[this->i % 8].get_firstname() << " to phonebook!" << std::endl;
    this->i++;
}

void        Phonebook::seach(void)
{
    std::string str;

    if (!search_gui(this->contact))
    {
        std::cout << "No contacts found!" << std::endl;
        return ;
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "type index to search: ";
        if (std::getline(std::cin, str) && str != "")
        {
            if (str.size() > 1)
                std::cout << "input only index number between 0-7 and no whitespaces" << std::endl;
            else
                break ;
            str = "";
        }
    }
    if (str.size() == 1 && str[0] >= '0' && str[0] <= '7' && this->contact[str[0] - '0'].get_firstname().size())
        print_contact(this->contact[str[0] - '0']);
}

void        Phonebook::print_contact(Contacts cont)
{
    std::cout << "Firstname: " << cont.get_firstname() << std::endl;
    std::cout << "Lastname: " << cont.get_lastname() << std::endl;
    std::cout << "Nickname: " << cont.get_nickname() << std::endl;
    std::cout << "Darkest secret: " << cont.get_secret() << std::endl;
    std::cout << "Phonenumber: " << cont.get_number() << std::endl;
}

Contacts    Phonebook::get_contact(int i)
{
    return (this->contact[i]);
}
