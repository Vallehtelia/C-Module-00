/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:59:42 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/02 18:59:45 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <string>
# include <cctype>

class   Contacts
{
    private:
        std::string     firstname;
        std::string     lastname;
        std::string     nickname;
        std::string     darkest_secret;
        unsigned int    phonenumber;
    public:
        std::string     get_firstname(void) const;
        std::string     get_lastname(void) const;
        std::string     get_nickname(void) const;
        std::string     get_secret(void) const;
        int             get_number(void) const;
        void            set_firstname(std::string str);
        void            set_lastname(std::string str);
        void            set_nickname(std::string str);
        void            set_secret(std::string str);
        void            set_number(std::string str);
};

#endif
