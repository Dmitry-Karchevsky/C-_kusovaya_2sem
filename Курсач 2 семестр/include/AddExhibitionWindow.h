#ifndef ADDEXHIBITIONWINDOW_H
#define ADDEXHIBITIONWINDOW_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "ExhibitionFactory.h"
//#include "Base.h"

class ExhibitionFactory;

class Base;

class AddExhibitionWindow
{
public:
    Date da1, da2;
    std::string name, direction;
    int d1, m1, y1, d2, m2, y2;

    void createExhibition(ExhibitionFactory &s, Base& base);
};

#endif // ADDEXHIBITIONWINDOW_H
