#include "AddMuseumWindow.h"

void AddMuseumWindow::createMuseum(MuseumFactory &a, Base& base)
{
    std::cout << "\n������� �������� �����: ";
    std::cin >> name;
    std::cout << "������� ������ �����: ";
    std::cin >> address;

    a.Add(name, address, base);
}

/*bool AddMuseumWindow::createMuseum()
{
    //�������� � ������������ ��������� ������������ �����int p;
    std::cout << "\n������� �������� �����: ";
    std::cin >> name;
    std::cout << "������� ������ �����: ";
    std::cin >> address;

    //������� ������� � ������� �����
    //MuseumFactory(name, address);
    MuseumFactory a;
    a.Add(name, address);

    //������� ���������
    int p = 1;
    for (int i = 0; i < a.bob; i++){
        if (a.MVector.back().getNameM() == a.MVector[i].getNameM()){//��������� ������������ ������ � ������
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
