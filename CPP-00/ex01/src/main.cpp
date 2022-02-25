#include "ClassPhoneBook.hpp"

std::string addElement(std::string type) {
    std::string buff;

    std::cout << type << std::endl;
    getline(std::cin, buff);
    return (buff);
}

int main(void) {
    std::string buff;
    PhoneBook   phoneBook;
    Contact     contact;
    int         exit = 0;
    int         i;

    while (!exit)
    {
        getline(std::cin, buff);
        if (buff == "EXIT")
            exit = 1;
        
        else if (buff == "ADD")
        {
            contact.SetFirstName(addElement("First Name     :"));
            contact.SetLastName(addElement("Last Name      :"));
            contact.SetNickname(addElement("Nickname       :"));
            contact.SetPhoneNumber(addElement("Phone Number   :"));
            contact.SetDarkestSecret(addElement("Darkest Secret :"));
            phoneBook.AddContact(contact);
        }
        else if (buff == "SEARCH")
        {
            std::cout << "_____________________________________________" << std::endl;
            std::cout << "|     Index| FirstName|  LastName|  Nickname|" << std::endl;
            std::cout << "|__________|__________|__________|__________|" << std::endl;
            for (i = 0; i < ; i++)
            {
                contact = phoneBook.GetContact(i);
                std::cout << "|" << std::right << std::setw(10) << i;
                std::cout << "|" << std::right << std::setw(10) << contact.GetFirstName();
                std::cout << "|" << std::right << std::setw(10) << contact.GetLastName();
                std::cout << "|" << std::right << std::setw(10) << contact.GetNickname();
                std::cout << "|" << std::endl;
            }
        }
        else
            std::cout << "\033[1;31mOnly ADD, SEARCH and EXIT are valid commands.\033[0m" << std::endl;
    }
};