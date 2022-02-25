#include "ClassPhoneBook.hpp"

Contact::Contact(void) {
}
Contact::~Contact(void) {
}

std::string Contact::GetFirstName(void) {
    return (firstName);
}
std::string Contact::GetLastName(void) {
    return (lastName);
}
std::string Contact::GetNickname(void) {
    return (nickname);
}
std::string Contact::GetDarkestSecret(void) {
    return (darkestSecret);
}
std::string Contact::GetPhoneNumber(void) {
    return (phoneNumber);
}

void        Contact::SetFirstName(std::string str) {
    firstName = str;
}
void        Contact::SetLastName(std::string str) {
    lastName = str;
}
void        Contact::SetNickname(std::string str) {
    nickname = str;
}
void        Contact::SetDarkestSecret(std::string str) {
    darkestSecret = str;
}
void        Contact::SetPhoneNumber(std::string nbr) {
    phoneNumber = nbr;
}