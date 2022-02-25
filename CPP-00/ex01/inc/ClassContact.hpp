#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class  Contact {
    private :
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string darkestSecret;
        std::string phoneNumber;

    public :
        Contact(void);
        ~Contact(void);

        std::string GetFirstName(void);
        std::string GetLastName(void);
        std::string GetNickname(void);
        std::string GetDarkestSecret(void);
        std::string GetPhoneNumber(void);

        void        SetFirstName(std::string str);
        void        SetLastName(std::string str);
        void        SetNickname(std::string str);
        void        SetDarkestSecret(std::string str);
        void        SetPhoneNumber(std::string nbr);
};

#endif