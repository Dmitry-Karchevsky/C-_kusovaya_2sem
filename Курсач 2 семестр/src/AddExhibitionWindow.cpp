#include "AddExhibitionWindow.h"

void AddExhibitionWindow::createExhibition(ExhibitionFactory &exh, Base& base)
{
    std::cout << "\n������� �������� ��������: ";
    std::cin >> name;
    std::cout << "������� ����������� ��������: ";
    std::cin >> direction;
    std::cout << "������� ���� ����������: \n������: \n";
    std::cout << "�����: ";
    std::cin >> d1;
    std::cout << "�����: ";
    std::cin >> m1;
    std::cout << "���: ";
    std::cin >> y1;
    std::cout << "�����:\n";
    std::cout << "�����: ";
    std::cin >> d2;
    std::cout << "�����: ";
    std::cin >> m2;
    std::cout << "���: ";
    std::cin >> y2;
    da1.setDay(d1);
    da1.setMonth(m1);
    da1.setYear(y1);
    da2.setDay(d2);
    da2.setMonth(m2);
    da2.setYear(y2);

    //tf.AddT(base);
    exh.Add(name, direction, base, da1, da2);
}
