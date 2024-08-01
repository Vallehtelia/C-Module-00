
#include "phonebook_utils.hpp"

int main()
{
    Phonebook   ph;
	std::string str;

    std::cout << std::endl << "Available commands are: ";
    std::cout << "'add' 'search' and 'exit'" << std::endl << std::endl;
    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, str);
        if (str == "add")
            ph.add();
        else if (str == "search")
            ph.seach();
        else if (str == "exit")
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