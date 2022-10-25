#include "DataOfLipids.h"

void DataOfLipids::loadData() {
    double column1, column2;
    std::vector<double> dX,dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        dX.push_back(column1);
        dY.push_back(column2);
    }
    plik.close();
    auto it = dX.begin();
    for (it; it != dX.end(); it++) {
        std::cout << *it << std::endl;
    }
    auto it2 = dY.begin();
    for (it2; it2 != dY.end(); it2++) {
        std::cout << *it2 << std::endl;
    }
}
void DataOfLipids::loadDataX() {
    double column1, column2;
    std::vector<double> dX;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        dX.push_back(column1);
    }
    plik.close();
}
void DataOfLipids::loadDataY() {
    double column1, column2;
    std::vector<double> dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        dY.push_back(column2);
    }
    plik.close();
}
void DataOfLipids::showDataX(const std::vector<double>& dX) {
    
    auto it = dX.begin();
    for (it; it != dX.end(); it++) {
        std::cout << *it << std::endl;
    }
}
void DataOfLipids::showDataY(const std::vector<double>& dY) {
    
    auto it2 = dY.begin();
    for (it2; it2 != dY.end(); it2++) {
        std::cout << *it2 << std::endl;
    }
}


