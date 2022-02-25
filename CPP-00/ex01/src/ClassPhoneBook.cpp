#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    count = 0;
}
PhoneBook::~PhoneBook(void) {
}

int       PhoneBook::GetCount() {
    return (count);
}
Contact   PhoneBook::GetContact(int index) {
    return (contacts[index]);
}
void      PhoneBook::AddContact(Contact contact) {
    if (count == 8)
        count = 0;
    contacts[count] = contact;
    count++;
}