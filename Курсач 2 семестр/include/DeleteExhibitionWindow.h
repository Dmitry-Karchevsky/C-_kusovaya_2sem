#ifndef DELETEEXHIBITIONWINDOW_H
#define DELETEEXHIBITIONWINDOW_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "ExhibitionFactory.h"
#include "Base.h"

class Base;

class ExhibitionFactory;

class DeleteExhibitionWindow
{
public:
    void DeleteExhibition(ExhibitionFactory& c, Base& base);
};

#endif // DELETEEXHIBITIONWINDOW_H
