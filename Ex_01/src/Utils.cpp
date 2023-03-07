#include "../headers/PhoneBook.hpp"
#include "../headers/Utils.hpp"
#include <iostream>

std::string DelSpaces(std::string Str)
{
    unsigned int s = Str.find_first_not_of(" ");
    unsigned int l = Str.find_last_not_of(" ");
    if (l + 1 < Str.size())
        Str.erase(l + 1, Str.size());
    if (s > 0)
        Str.erase(0, s);
    return Str;
}