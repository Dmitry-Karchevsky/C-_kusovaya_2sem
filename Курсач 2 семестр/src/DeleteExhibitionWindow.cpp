#include "DeleteExhibitionWindow.h"

void DeleteExhibitionWindow::DeleteExhibition(ExhibitionFactory& c, Base& base)
{
int n;
std::cout << "”кажите номер выставки, которую желаете удалить " << std::endl;
c.Show(base);
std::cin >> n;
c.DeleteExhibition(n, base);
}
