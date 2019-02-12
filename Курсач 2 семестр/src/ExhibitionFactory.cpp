#include "ExhibitionFactory.h"

ExhibitionFactory::ExhibitionFactory(){}

void ExhibitionFactory::Add(std::string name, std::string direction, Base &base, Date da1, Date da2)
{
    Exhibition e;
    e.setNameEx(name);
    e.setDirection(direction);
    e.setNumber();
    e.setDateEx(da1, da2);
    e.setMus(base.MVector1[base.EVector1.size()]);
    base.EVector1.push_back(e);
}

void ExhibitionFactory::Show(Base &base)
{
    //std::cout << "Вызвался метод show" << std::endl;
    int i;
    std::cout << "\nНаши Выставки:" << std::endl;
    for (i=0; i < base.EVector1.size(); i++){
        std::cout << i+1 << ")";
        base.EVector1[i].print_Ex();
    }
}

void ExhibitionFactory::DeleteExhibition(int d, Base& base)
{
    std::cout << "Удалилась выставка: " << base.EVector1[d-1].getNameEx() << std::endl;
    base.EVector1.erase(base.EVector1.begin()+d-1);

    base.TVector1.erase(base.TVector1.begin()+d-1);
}
