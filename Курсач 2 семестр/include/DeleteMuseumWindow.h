#ifndef DELETEMUSEUMWINDOW_H
#define DELETEMUSEUMWINDOW_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "MuseumFactory.h"
#include "Base.h"

class Base;

class MuseumFactory;

class DeleteMuseumWindow
{
public:
    void DeleteMuseum(MuseumFactory& c, Base& base);
};

#endif // DELETEMUSEUMWINDOW_H
