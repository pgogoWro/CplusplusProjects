#include <iostream>
#include "DataOfLipids.h"


int main()
{
    // chialem tu wywolac utworzony obiekt klasy DataOfLipids, ktory bylby vectorem, a nastepnie ten vector 
    // uzyc jako dane np osi X do wykresu. Ogolnie mam kilkanasie danych do wykresu,
    // i chcialem aby wykres byl losowany (cala logike mam ogarnieta lecz jeszcze nie napisana), i kuzwa zacialem sie.
    //DataOfLipids dx, dy;
    DataOfLipids::loadDataX();
    DataOfLipids::loadDataY();
    
    DataOfLipids::showDataY();
    DataOfLipids::showDataY();



    //dx.loadDateX();
    //dy.loadDateY();

    //dx.showDateX();
    //dy.showDateY();

    return 0;
}
