#include "AddMuseumWindow.h"

void AddMuseumWindow::createMuseum(MuseumFactory &a, Base& base)
{
    std::cout << "\n¬ведите название музе€: ";
    std::cin >> name;
    std::cout << "¬ведите адресс музе€: ";
    std::cin >> address;

    a.Add(name, address, base);
}

/*bool AddMuseumWindow::createMuseum()
{
    //спросить у пользовател€ параметры создаваемого музе€int p;
    std::cout << "\n¬ведите название музе€: ";
    std::cin >> name;
    std::cout << "¬ведите адресс музе€: ";
    std::cin >> address;

    //вызвать фабрику и создать музей
    //MuseumFactory(name, address);
    MuseumFactory a;
    a.Add(name, address);

    //вернуть результат
    int p = 1;
    for (int i = 0; i < a.bob; i++){
        if (a.MVector.back().getNameM() == a.MVector[i].getNameM()){//сравнение существующих музеев с данным
            p=0;
        }
    }

    if (p==1){
        return true;
    }
    else{
        return false;
    }
}*/
