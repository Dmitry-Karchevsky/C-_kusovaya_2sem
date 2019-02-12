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

    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    Base base;
    MuseumFactory a;
    ExhibitionFactory exh;
    TicketFactory tf;

    int q = 0;
    while (q!=8){
        std::cout << "\nВведите номер операци: " << std::endl;
        std::cout << "1.Создание музеев " << std::endl;
        std::cout << "2.Создание выставок " << std::endl;
        std::cout << "3.Вывод музеев " << std::endl;
        std::cout << "4.Вывод выставок " << std::endl;
        std::cout << "5.Удаление музеев " << std::endl;
        std::cout << "6.Удаление выставок " << std::endl;
        std::cout << "7.Поиск " << std::endl;
        std::cout << "8.Конец " << std::endl;
        std::cin >> q;

        switch(q){

            case 1:{//Функция создания музеев
                int p,i;
                std::cout << "Введите количество музеев: ";
                std::cin >> p;
                for (i = 0; i < p; i++){
                    AddMuseumWindow w;
                    w.createMuseum(a, base);
                }
                break;
            }

            case 2:{//Функция создания выставок
                //std::cout << "Введите количество выставкок: " << std::endl;
                //std::cin >> v;
                std::cout << "Введите информацию о выставках, номер добавленной выставки соответствует номеру музея" << std::endl;
                for (int i = 0; i < base.MVector1.size(); i++){
                    AddExhibitionWindow ew;
                    ew.createExhibition(exh, base);
                    tf.AddT(base);
                }
                break;
            }

             case 3:{
                //Функция вывода музеев
                ShowMuseumWindow wi;
                wi.showMuseum(a, base);
                break;
            }

             case 4:{
                //Функция вывода выставок
                ShowExhibitionWindow ewi;
                ewi.ShowExhibition(exh, base);
                break;
            }

             case 5:{
                //Функция удаления музеев
                DeleteMuseumWindow delm;
                delm.DeleteMuseum(a, base);
                break;
            }

             case 6:{
                //Функция Удалния выставок
                DeleteExhibitionWindow delexh;
                delexh.DeleteExhibition(exh, base);
                break;
            }

             case 7:{
                //Функция Поиска
                int i, age, k = 0, day, month, year, num;
                std::string exhib, mus;
                std::cout << "Введите свой возраст: ";
                std::cin >> age;

                while(k != 4){
                    std::cout << "1.Поиск по выставке" << std::endl;
                    std::cout << "2.Поиск по музею" << std::endl;
                    std::cout << "3.Поиск по дате" << std::endl;
                    std::cout << "4.Закончить поиск" << std::endl;
                    std::cout << "Введите критерий поиска: ";
                    std::cin >> k;
                    switch(k){

                        case 1:{
                            int prop;
                            std::string s = "yes";
                            while (s == "да" || s == "Да" || s == "yes" || s == "Yes"){
                                prop = 0;
                                std::cout << "Введите название выставки, которую хотите посетить: ";
                                std::cin >> exhib;
                                for (i = 0; i < base.EVector1.size(); i++){
                                    if (exhib == base.EVector1[i].getNameEx()){
                                        if (base.EVector1[i].getNumber() != 0){
                                            std::cout << "Количество билетов: " << base.EVector1[i].getNumber() << std::endl;
                                            std::cout << "Цена без льгот: " << base.TVector1[i].getPrice() << std::endl;
                                            std::cout << "Ваш билет: " << std::endl;
                                            base.TVector1[i].print_Ticket(age);
                                            base.EVector1[i].number_of_tickets--;
                                            prop = 1;
                                        }
                                        else{
                                            std::cout << "Извините, билетов на данную выставку нет" << std::endl;
                                            prop = 1;
                                        }
                                    }
                                }
                                if (prop == 0){
                                    std::cout << "Данной выставки не существует" << std::endl;
                                    //prop = 0;
                                }

                                std::cout << "\nХотите продолжить поиск? \nВведите да или нет" << std::endl;
                                std::cin >> s;
                            }
                            break;
                        }

                        case 2:{
                            int pro;
                            std::string u = "yes";
                            while (u == "да" || u == "Да" || u == "yes" || u == "Yes"){
                                pro = 0;
                                std::cout << "Введите название музея, который хотите посетить: ";
                                std::cin >> mus;
                                for (i = 0; i < base.MVector1.size(); i++){
                                    if (mus == base.MVector1[i].getNameM()){
                                        std::cout << "В данном музее проходит выставка - " << base.EVector1[i].getNameEx() << std::endl;
                                        if (base.EVector1[i].getNumber() != 0){
                                            std::cout << "Количество билетов: " << base.EVector1[i].getNumber() << std::endl;
                                            std::cout << "Цена без льгот: " << base.TVector1[i].getPrice() << std::endl;
                                            std::cout << "Ваш билет: " << std::endl;
                                            base.TVector1[i].print_Ticket(age);
                                            base.EVector1[i].number_of_tickets--;
                                            pro = 1;
                                        }
                                        else{
                                            std::cout << "Извините, билетов в данный музей нет" << std::endl;
                                            pro = 1;
                                        }
                                    }
                                }
                                if (pro == 0){
                                    std::cout << "Данного музея не существует" << std::endl;
                                    //pro = 0;
                                }

                                std::cout << "\nХотите продолжить поиск? \nВведите да или нет" << std::endl;
                                std::cin >> u;
                            }

                            break;
                        }

                        case 3:{
                            std::vector <Exhibition> Evec;
                            std::vector <Ticket> Tvec;
                            int pr, z;
                            std::string us = "yes";
                            while (us == "да" || us == "Да" || us == "yes" || us == "Yes"){
                                pr = 0;
                                std::cout << "Введите дату, на которую планируется поход в музей: \n";
                                std::cout << "Число: ";
                                std::cin >> day;
                                std::cout << "Месяц: ";
                                std::cin >> month;
                                std::cout << "Год: ";
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
                                    std::cout << "На данный день выставок нет" << std::endl;
                                    //pr = 1;
                                }
                                else{
                                    for(z = 0; z < Evec.size(); z++){
                                        std::cout << z+1 << ") ";
                                        Evec[z].print_Ex();
                                    }
                                    std::cout << "Выберете номер выставки: ";
                                    std::cin >> num;
                                    std::cout << "Количество билетов: " << Evec[num-1].getNumber() << std::endl;
                                    std::cout << "Цена без льгот: " << Tvec[num-1].getPrice() << std::endl;
                                    std::cout << "Ваш билет: " << std::endl;
                                    Tvec[num-1].print_Ticket(age);
                                    Evec[num-1].number_of_tickets--;

                                    while(Evec.size() != 0){
                                        Evec.pop_back();
                                    }
                                }

                                std::cout << "\nХотите продолжить поиск? \nВведите да или нет" << std::endl;
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
