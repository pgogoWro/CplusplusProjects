#include "DataOfLipids.h"


void loadDataX() {
    std::vector<double> dX, dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> DataOfLipids::column1 >> DataOfLipids::column2) {
        dX.push_back(DataOfLipids::column1);
    }
    plik.close();
}
void loadDataY() {
    std::vector<double> dX, dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> DataOfLipids::column1 >> DataOfLipids::column2) {
        dY.push_back(DataOfLipids::column2);
    }
    plik.close();
}
void showDataX() {
    std::vector<double> dX, dY;
    auto it = dX.begin();
    for (it; it != dX.end(); it++) {
        std::cout << *it << std::endl;
    }
}
void showDataY() {
    std::vector<double> dX, dY;
    auto it2 = dY.begin();
    for (it2; it2 != dY.end(); it2++) {
        std::cout << *it2 << std::endl;
    }
}
