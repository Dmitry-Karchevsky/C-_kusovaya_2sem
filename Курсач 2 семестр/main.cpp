//#include <AllIncludes.h>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Base.h"
#include "MuseumFactory.h"
#include "ExhibitionFactory.h"
#include "TicketFactory.h"
#include "AddMuseumWindow.h"
#include "ShowMuseumWindow.h"
#include "AddExhibitionWindow.h"
#include "ShowExhibitionWindow.h"
#include "DeleteMuseumWindow.h"
#include "DeleteExhibitionWindow.h"

int main(){

    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    Base base;
    MuseumFactory a;
    ExhibitionFactory exh;
    TicketFactory tf;

    int q = 0;
    while (q!=8){
        std::cout << "\n������� ����� �������: " << std::endl;
        std::cout << "1.�������� ������ " << std::endl;
        std::cout << "2.�������� �������� " << std::endl;
        std::cout << "3.����� ������ " << std::endl;
        std::cout << "4.����� �������� " << std::endl;
        std::cout << "5.�������� ������ " << std::endl;
        std::cout << "6.�������� �������� " << std::endl;
        std::cout << "7.����� " << std::endl;
        std::cout << "8.����� " << std::endl;
        std::cin >> q;

        switch(q){

            case 1:{//������� �������� ������
                int p,i;
                std::cout << "������� ���������� ������: ";
                std::cin >> p;
                for (i = 0; i < p; i++){
                    AddMuseumWindow w;
                    w.createMuseum(a, base);
                }
                break;
            }

            case 2:{//������� �������� ��������
                //std::cout << "������� ���������� ���������: " << std::endl;
                //std::cin >> v;
                std::cout << "������� ���������� � ���������, ����� ����������� �������� ������������� ������ �����" << std::endl;
                for (int i = 0; i < base.MVector1.size(); i++){
                    AddExhibitionWindow ew;
                    ew.createExhibition(exh, base);
                    tf.AddT(base);
                }
                break;
            }

             case 3:{
                //������� ������ ������
                ShowMuseumWindow wi;
                wi.showMuseum(a, base);
                break;
            }

             case 4:{
                //������� ������ ��������
                ShowExhibitionWindow ewi;
                ewi.ShowExhibition(exh, base);
                break;
            }

             case 5:{
                //������� �������� ������
                DeleteMuseumWindow delm;
                delm.DeleteMuseum(a, base);
                break;
            }

             case 6:{
                //������� ������� ��������
                DeleteExhibitionWindow delexh;
                delexh.DeleteExhibition(exh, base);
                break;
            }

             case 7:{
                //������� ������
                int i, age, k = 0, day, month, year, num;
                std::string exhib, mus;
                std::cout << "������� ���� �������: ";
                std::cin >> age;

                while(k != 4){
                    std::cout << "1.����� �� ��������" << std::endl;
                    std::cout << "2.����� �� �����" << std::endl;
                    std::cout << "3.����� �� ����" << std::endl;
                    std::cout << "4.��������� �����" << std::endl;
                    std::cout << "������� �������� ������: ";
                    std::cin >> k;
                    switch(k){

                        case 1:{
                            int prop;
                            std::string s = "yes";
                            while (s == "��" || s == "��" || s == "yes" || s == "Yes"){
                                prop = 0;
                                std::cout << "������� �������� ��������, ������� ������ ��������: ";
                                std::cin >> exhib;
                                for (i = 0; i < base.EVector1.size(); i++){
                                    if (exhib == base.EVector1[i].getNameEx()){
                                        if (base.EVector1[i].getNumber() != 0){
                                            std::cout << "���������� �������: " << base.EVector1[i].getNumber() << std::endl;
                                            std::cout << "���� ��� �����: " << base.TVector1[i].getPrice() << std::endl;
                                            std::cout << "��� �����: " << std::endl;
                                            base.TVector1[i].print_Ticket(age);
                                            base.EVector1[i].number_of_tickets--;
                                            prop = 1;
                                        }
                                        else{
                                            std::cout << "��������, ������� �� ������ �������� ���" << std::endl;
                                            prop = 1;
                                        }
                                    }
                                }
                                if (prop == 0){
                                    std::cout << "������ �������� �� ����������" << std::endl;
                                    //prop = 0;
                                }

                                std::cout << "\n������ ���������� �����? \n������� �� ��� ���" << std::endl;
                                std::cin >> s;
                            }
                            break;
                        }

                        case 2:{
                            int pro;
                            std::string u = "yes";
                            while (u == "��" || u == "��" || u == "yes" || u == "Yes"){
                                pro = 0;
                                std::cout << "������� �������� �����, ������� ������ ��������: ";
                                std::cin >> mus;
                                for (i = 0; i < base.MVector1.size(); i++){
                                    if (mus == base.MVector1[i].getNameM()){
                                        std::cout << "� ������ ����� �������� �������� - " << base.EVector1[i].getNameEx() << std::endl;
                                        if (base.EVector1[i].getNumber() != 0){
                                            std::cout << "���������� �������: " << base.EVector1[i].getNumber() << std::endl;
                                            std::cout << "���� ��� �����: " << base.TVector1[i].getPrice() << std::endl;
                                            std::cout << "��� �����: " << std::endl;
                                            base.TVector1[i].print_Ticket(age);
                                            base.EVector1[i].number_of_tickets--;
                                            pro = 1;
                                        }
                                        else{
                                            std::cout << "��������, ������� � ������ ����� ���" << std::endl;
                                            pro = 1;
                                        }
                                    }
                                }
                                if (pro == 0){
                                    std::cout << "������� ����� �� ����������" << std::endl;
                                    //pro = 0;
                                }

                                std::cout << "\n������ ���������� �����? \n������� �� ��� ���" << std::endl;
                                std::cin >> u;
                            }

                            break;
                        }

                        case 3:{
                            std::vector <Exhibition> Evec;
                            std::vector <Ticket> Tvec;
                            int pr, z;
                            std::string us = "yes";
                            while (us == "��" || us == "��" || us == "yes" || us == "Yes"){
                                pr = 0;
                                std::cout << "������� ����, �� ������� ����������� ����� � �����: \n";
                                std::cout << "�����: ";
                                std::cin >> day;
                                std::cout << "�����: ";
                                std::cin >> month;
                                std::cout << "���: ";
                                std::cin >> year;

                                for (i = 0; i < base.EVector1.size(); i++){

                                    if (year > base.EVector1[i].date1.getYear() && year < base.EVector1[i].date2.getYear()){
                                        if (base.EVector1[i].getNumber() != 0){
                                            //std::cout << i+1 << ") ";
                                            //base.EVector1[i].print_Ex();
                                            Evec.push_back(base.EVector1[i]);
                                            Tvec.push_back(base.TVector1[i]);
                                            pr = 1;
                                        }
                                    }

                                    if (year == base.EVector1[i].date1.getYear() && year != base.EVector1[i].date2.getYear()){
                                        if(month > base.EVector1[i].date1.getMonth()){
                                            if (base.EVector1[i].getNumber() != 0){
                                            //std::cout << i+1 << ") ";
                                            //base.EVector1[i].print_Ex();
                                            Evec.push_back(base.EVector1[i]);
                                            Tvec.push_back(base.TVector1[i]);
                                            pr = 1;
                                            }
                                        }
                                        if(month == base.EVector1[i].date1.getMonth()){
                                            if(day >= base.EVector1[i].date1.getDay()){
                                                if (base.EVector1[i].getNumber() != 0){
                                                    //std::cout << i+1 << ") ";
                                                    //base.EVector1[i].print_Ex();
                                                    Evec.push_back(base.EVector1[i]);
                                                    Tvec.push_back(base.TVector1[i]);
                                                    pr = 1;
                                                }
                                            }
                                        }
                                    }

                                    if (year == base.EVector1[i].date2.getYear() && year != base.EVector1[i].date1.getYear()){
                                        if(month < base.EVector1[i].date2.getMonth()){
                                            if (base.EVector1[i].getNumber() != 0){
                                            //std::cout << i+1 << ") ";
                                            //base.EVector1[i].print_Ex();
                                            Evec.push_back(base.EVector1[i]);
                                            Tvec.push_back(base.TVector1[i]);
                                            pr = 1;
                                            }
                                        }
                                        if(month == base.EVector1[i].date2.getMonth()){
                                            if(day <= base.EVector1[i].date2.getDay()){
                                                if (base.EVector1[i].getNumber() != 0){
                                                    //std::cout << i+1 << ") ";
                                                    //base.EVector1[i].print_Ex();
                                                    Evec.push_back(base.EVector1[i]);
                                                    Tvec.push_back(base.TVector1[i]);
                                                    pr = 1;
                                                }
                                            }
                                        }
                                    }

                                    if (year == base.EVector1[i].date1.getYear() && year == base.EVector1[i].date2.getYear()){

                                        if(month > base.EVector1[i].date1.getMonth() && month < base.EVector1[i].date2.getMonth()){
                                            if (base.EVector1[i].getNumber() != 0){
                                                //std::cout << i+1 << ") ";
                                                //base.EVector1[i].print_Ex();
                                                Evec.push_back(base.EVector1[i]);
                                                Tvec.push_back(base.TVector1[i]);
                                                pr = 1;
                                            }
                                        }

                                        if(month == base.EVector1[i].date1.getMonth() && month != base.EVector1[i].date2.getMonth()){
                                            if(day >= base.EVector1[i].date1.getDay()){
                                                if (base.EVector1[i].getNumber() != 0){
                                                    //std::cout << i+1 << ") ";
                                                    //base.EVector1[i].print_Ex();
                                                    Evec.push_back(base.EVector1[i]);
                                                    Tvec.push_back(base.TVector1[i]);
                                                    pr = 1;
                                                }
                                            }
                                        }

                                        if(month == base.EVector1[i].date2.getMonth() && month != base.EVector1[i].date1.getMonth()){
                                            if(day <= base.EVector1[i].date2.getDay()){
                                                if (base.EVector1[i].getNumber() != 0){
                                                    //std::cout << i+1 << ") ";
                                                    //base.EVector1[i].print_Ex();
                                                    Evec.push_back(base.EVector1[i]);
                                                    Tvec.push_back(base.TVector1[i]);
                                                    pr = 1;
                                                }
                                            }
                                        }

                                        if (month == base.EVector1[i].date1.getMonth() && month == base.EVector1[i].date2.getMonth()){
                                            if(day <= base.EVector1[i].date2.getDay() && day >= base.EVector1[i].date1.getDay()){
                                                if (base.EVector1[i].getNumber() != 0){
                                                    //std::cout << i+1 << ") ";
                                                    //base.EVector1[i].print_Ex();
                                                    Evec.push_back(base.EVector1[i]);
                                                    Tvec.push_back(base.TVector1[i]);
                                                    pr = 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                if (pr == 0){
                                    std::cout << "�� ������ ���� �������� ���" << std::endl;
                                    //pr = 1;
                                }
                                else{
                                    for(z = 0; z < Evec.size(); z++){
                                        std::cout << z+1 << ") ";
                                        Evec[z].print_Ex();
                                    }
                                    std::cout << "�������� ����� ��������: ";
                                    std::cin >> num;
                                    std::cout << "���������� �������: " << Evec[num-1].getNumber() << std::endl;
                                    std::cout << "���� ��� �����: " << Tvec[num-1].getPrice() << std::endl;
                                    std::cout << "��� �����: " << std::endl;
                                    Tvec[num-1].print_Ticket(age);
                                    Evec[num-1].number_of_tickets--;

                                    while(Evec.size() != 0){
                                        Evec.pop_back();
                                    }
                                }

                                std::cout << "\n������ ���������� �����? \n������� �� ��� ���" << std::endl;
                                std::cin >> us;
                            }
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    return 0;
}
