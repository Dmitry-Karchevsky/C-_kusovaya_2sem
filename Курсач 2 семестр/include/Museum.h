#include <iostream>
#ifndef MUSEUM_H
#define MUSEUM_H


class Museum
{
public:
    std::string nameMuseum, addressMuseum;

    Museum();

    Museum(std::string name, std::string address);

    std::string getNameM();
    void setNameM(std::string name);

    std::string getAddressM();
    void setAddressM(std::string address);

    void print_M();

};

#endif // MUSEUM_H
