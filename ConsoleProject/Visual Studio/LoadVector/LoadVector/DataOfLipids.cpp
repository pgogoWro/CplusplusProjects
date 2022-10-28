#include "DataOfLipids.h"

void DataOfLipids::loadX() {
    double column1, column2;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        x.push_back(column1);
    }
    plik.close();
}
void DataOfLipids::loadY() {
    double column1, column2;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        y.push_back(column2);
    }
    plik.close();
}

std::vector<double>& DataOfLipids::getX() {
    return x;
}
std::vector<double>& DataOfLipids::getY() {
    return y;
}
