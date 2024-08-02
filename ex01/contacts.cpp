/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:59:37 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/02 18:59:55 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

std::string Contacts::get_firstname(void) const
{
    return (this->firstname);
}

std::string Contacts::get_lastname(void) const
{
    return (this->lastname);
}

std::string Contacts::get_nickname(void) const
{
    return (this->nickname);
}

std::string Contacts::get_secret(void) const
{
    return (this->darkest_secret);
}

int         Contacts::get_number(void) const
{
    return (this->phonenumber);
}

void        Contacts::set_firstname(std::string str)
{
    this->firstname = str;
}

void        Contacts::set_lastname(std::string str)
{
    this->lastname = str;
}

void        Contacts::set_nickname(std::string str)
{
    this->nickname = str;
}

void        Contacts::set_secret(std::string str)
{
    this->darkest_secret = str;
}

void        Contacts::set_number(std::string str)
{
    try
    {
        this->phonenumber = std::stoi(str);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << "\033[31mInvalid argument: The input string is not a valid number. Number set to -1\033[0m" << std::endl;
        this->phonenumber = std::stoi("-1");
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << "\033[31mNumber out of range! Number set to -1\033[0m" << std::endl;
        this->phonenumber = std::stoi("-1");
    }
}
