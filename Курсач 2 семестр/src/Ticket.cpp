#include "Ticket.h"

Ticket::Ticket(){}

int Ticket:: getPrice(){
   return price;
}

void Ticket:: setPrice(){
    srand(time(NULL));
    price = rand()%1000+50;
}

std::string Ticket:: getPrivilage(){
    return privilage;
}

void Ticket:: setPrivilage(std::string priv){
    privilage = priv;
}

void Ticket:: setExh(Exhibition e){
    exh = e;
}

void Ticket:: print_Ticket(int age){
     if (age<=10){
        setPrivilage("Ребенок");
     }
     if (age>=60){
        setPrivilage("Пенсионер");
     }
     if ((age>10) && (age<60)){
        setPrivilage("Взрослый");
     }
     std::cout << "Музей " << exh.mus.getNameM() << ", адресс: " << exh.mus.getAddressM() << std::endl;
     std::cout << "Выставка " << exh.getNameEx() << ", направление: " << exh.getDirection() << std::endl;
     std::cout << "Льготность: " << getPrivilage() << std::endl;
     if (age<=10){
        std::cout << "Цена со скидкой 50%: " << getPrice()/2 << std::endl;
     }
     if (age>=60){
        std::cout << "Цена со скидкой 30%: " << getPrice()*2/3 << std::endl;
     }
     if ((age>10) && (age<60)){
        std::cout << "Цена: " << getPrice() << std::endl;
     }
}
