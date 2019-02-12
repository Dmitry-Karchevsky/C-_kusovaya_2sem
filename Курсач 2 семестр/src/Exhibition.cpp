#include "Exhibition.h"


Exhibition::Exhibition(){}

void Exhibition::setDateEx(Date da1, Date da2){
    date1 = da1;
    date2 = da2;
}

std::string Exhibition:: getNameEx(){
   return NameEx;
}

void Exhibition:: setNameEx(std::string name){
    NameEx = name;
}

std::string Exhibition:: getDirection(){
   return directionEx;
}

void Exhibition:: setDirection(std::string direction){
    directionEx = direction;
}

int Exhibition:: getNumber(){
   return number_of_tickets;
}

void Exhibition:: setNumber(){
    srand(time(NULL));
    number_of_tickets = rand()%50;
}

void Exhibition:: setMus(Museum m){
    mus = m;
}

/*void Exhibition:: setTicket(Ticket t){
    tick = t;
}*/

void Exhibition:: print_Ex(){
    std::cout << "Выставка " << getNameEx() << ", направление: " << getDirection() << ", билетов: " << getNumber() << ", музей: " << mus.getNameM() << std::endl;
    std::cout << "Даты проведения: ";
    date1.printDate();
    std::cout << " - ";
    date2.printDate();
    std::cout << std::endl;
}

//Exhibition::~Exhibition()
//{
    //dtor
//}
