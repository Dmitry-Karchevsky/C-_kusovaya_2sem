#include "DeleteMuseumWindow.h"

void DeleteMuseumWindow::DeleteMuseum(MuseumFactory& c, Base& base)
{
int n;
std::cout << "”кажите номер музе€, который желаете удалить " << std::endl;
c.Show(base);
std::cin >> n;
c.DeleteMuseum(n, base);
}
