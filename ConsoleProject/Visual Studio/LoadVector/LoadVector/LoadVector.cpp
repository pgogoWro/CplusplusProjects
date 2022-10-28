#include <iostream>
#include "DataOfLipids.h"



int main()
{
    std::vector<double> vectorX, vectorY;
    DataOfLipids dX, dY;
    dX.loadX();
    dY.loadY();

    vectorX = dX.getX();
    vectorY = dY.getY();

    auto it = vectorX.begin();
    for (it; it != vectorX.end(); it++) {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    auto it2 = vectorY.begin();
    for (it2; it2 != vectorY.end(); it2++) {
        std::cout << *it2 << std::endl;
    }

    return 0;
}
