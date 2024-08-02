/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 19:00:16 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/02 19:00:19 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

# include "contacts.hpp"

class	Phonebook
{
	private:
        Contacts contact[8];
        int             i;
    public:
        Phonebook(void);
		~Phonebook(void);
        void        get_info(std::string data);
        void        add(void);
        void        seach(void);
        void        print_contact(Contacts cont);

        Contacts    get_contact(int i);
};

std::string get_spaces(int i);
std::string fix_width(std::string str);
int    search_gui(Contacts cont[8]);
void    trim(std::string &str);

#endif
