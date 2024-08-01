
#include "phonebook_utils.hpp"

void    trim(std::string &str)
{
    size_t  start;
    size_t  end;

    start = 0;
    while (start < str.size() && std::isspace(static_cast<unsigned char>(str[start])))
        start++;
    end = str.size();
    while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
        end--;
    str = str.substr(start, end - start);
}

std::string get_spaces(int i)
{
    std::string str;
    while (i--)
        str.append(" ");
    return (str);
}

std::string fix_width(std::string str)
{
    if (str.size() > 10)
    {
        str.resize(10);
        str[9] = '.';
    }
    return (str);
}

int    search_gui(Contacts cont[8])
{
    int         i;
    int         j;
    std::string str;

    for (int x = 0; x < 44; x++)
        std::cout << "-";
    std::cout << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    i = 0;
    j = 0;
    while (i < 8)
    {
        if (cont[i].get_firstname().size() > 0)
        {
            std::cout << "|" << "         " << i;
            str = fix_width(cont[i].get_firstname());
            std::cout << "|" << get_spaces(10 - str.size()) << str;
            str = fix_width(cont[i].get_lastname());
            std::cout << "|" << get_spaces(10 - str.size()) << str;
            str = fix_width(cont[i].get_nickname());
            std::cout << "|" << get_spaces(10 - str.size()) << str << "|" << std::endl;
            j++;
        }
        i++;
    }
    for (int x = 0; x < 44; x++)
        std::cout << "-";
    std::cout << std::endl;
    return (j);
}