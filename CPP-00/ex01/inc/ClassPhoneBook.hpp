#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include "ClassContact.hpp"

class  PhoneBook {
    private :
        Contact     contacts[8];
        int         count;
    public :
        PhoneBook(void);
        ~PhoneBook(void);

        Contact   GetContact(int index);
        int       GetCount();
        void      AddContact(Contact contact);
};

#endif