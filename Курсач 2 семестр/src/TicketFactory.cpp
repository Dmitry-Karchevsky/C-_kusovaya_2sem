#include "TicketFactory.h"

TicketFactory::TicketFactory(){}

void TicketFactory::AddT(Base& base)
{
    Ticket t;
    t.setPrice();
    t.setExh(base.EVector1[base.TVector1.size()]);
    base.TVector1.push_back(t);
}

/*void TicketFactory::ShowT(Base& base)
{
    //std::cout << "Вызвался метод show" << std::endl;
    int i;
    std::cout << "\nВсе билеты:" << std::endl;
    for (i=0; i < base.TVector1.size(); i++){
        std::cout << i+1 << ")";
        base.TVector1[i].print_Ticket();
    }
}*/
