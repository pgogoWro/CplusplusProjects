#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>

int main()
{
    double column1, column2;
    std::vector<double> dX , dY;
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


    for (int i = 0; i <= dX.size(); ++i) {
        std::cout << dX[i] << "  " << dY[i] << std::endl;
    }

    return 0;
}

