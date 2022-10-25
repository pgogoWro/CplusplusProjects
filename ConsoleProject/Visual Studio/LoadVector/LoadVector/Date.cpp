#include "Date.h"
#include <vector>

void loadDateX() {
    //double column1, column2;
    //std::vector<double> dX, dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        dX.push_back(column1);
        //dY.push_back(column2);
    }
    plik.close();
}
void loadDateY() {
    //double column1, column2;
    //std::vector<double> dX, dY;
    std::ifstream plik;
    plik.open("1.txt", std::ios::in);
    if (!plik) {
        std::cout << "Brak pliku z danymi";
    }
    while (plik >> column1 >> column2) {
        //dX.push_back(column1);
        dY.push_back(column2);
    }
    plik.close();
}
std::vector<double>& getDataX() {
    return dX;
}
std::vector<double>& getDataY() {
    return dY;
}
std::ostream& operator << (std::ostream& out, const Date& object) {
    out << object.at();
}