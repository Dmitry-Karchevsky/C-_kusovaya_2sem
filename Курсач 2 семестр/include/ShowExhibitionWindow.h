#ifndef SHOWEXHIBITIONWINDOW_H
#define SHOWEXHIBITIONWINDOW_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "ExhibitionFactory.h"
#include "Base.h"

class ShowExhibitionWindow
{
public:
    void ShowExhibition(ExhibitionFactory &p, Base& base);
};

#endif // SHOWEXHIBITIONWINDOW_H
