#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>

int main()
{
    double column1, column2;
    std::vector<double> dX, dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
        return 1;
    }
    while (plik >> column1 >> column2) {
        dX.push_back(column1);
        dY.push_back(column2);
    }
    plik.close();

    auto it = dX.begin();
    auto it2 = dY.begin();
    for (it; it != dX.end(); it++) {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    for (it2; it2 != dY.end(); it2++) {
        std::cout << *it2 << std::endl;
    }

    return 0;
}
