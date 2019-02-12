#include "MuseumFactory.h"

MuseumFactory::MuseumFactory(){}

void MuseumFactory::Add(std::string name, std::string address, Base& base)
{
    Museum m;
    m.setNameM(name);
    m.setAddressM(address);
    base.MVector1.push_back(m);
}

void MuseumFactory::Show(Base& base)
{
    //std::cout << "Вызвался метод show" << std::endl;
    int i;
    std::cout << "\nНаши музеи:" << std::endl;
    for (i=0; i < base.MVector1.size(); i++){
        std::cout << i+1 << ")";
        base.MVector1[i].print_M();
    }
}

void MuseumFactory::DeleteMuseum(int d, Base& base)
{
    std::cout << "Удалился музей: " << base.MVector1[d-1].getNameM() << std::endl;
    base.MVector1.erase(base.MVector1.begin()+d-1);

    if (base.EVector1.size() != 0){
        std::cout << "Удалилась выставка: " << base.EVector1[d-1].getNameEx() << std::endl;
        base.EVector1.erase(base.EVector1.begin()+d-1);

        base.TVector1.erase(base.TVector1.begin()+d-1);
    }
}
