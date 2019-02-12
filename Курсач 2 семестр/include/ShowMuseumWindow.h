#ifndef SHOWMUSEUMWINDOW_H
#define SHOWMUSEUMWINDOW_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "MuseumFactory.h"
#include "Base.h"


class ShowMuseumWindow
{
    public:
        void showMuseum(MuseumFactory &s, Base& base);


};

#endif // SHOWMUSEUMWINDOW_H
