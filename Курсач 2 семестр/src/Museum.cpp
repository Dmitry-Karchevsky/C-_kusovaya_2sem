#include "Museum.h"

Museum::Museum(){}

Museum::Museum(std::string name, std::string adress){
        this->nameMuseum = name;
        this->addressMuseum = adress;
}

std::string Museum:: getNameM(){
   return nameMuseum;
}

void Museum:: setNameM(std::string name){
    nameMuseum = name;
}

std::string Museum:: getAddressM(){
   return addressMuseum;
}

void Museum:: setAddressM(std::string adress){
    addressMuseum = adress;
}

void Museum:: print_M(){
    std::cout << "Музей " << getNameM() << ", адресс: " << getAddressM() << std::endl;
}
//Museum::~Museum()
//{
    //dtor
//}
