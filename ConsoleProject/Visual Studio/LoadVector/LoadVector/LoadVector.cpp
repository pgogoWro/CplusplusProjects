#include <iostream>
#include "DataOfLipids.h"



int main()
{
    // chialem tu wywolac utworzony obiekt klasy DataOfLipids, ktory bylby vectorem, a nastepnie ten vector 
    // uzyc jako dane np osi X do wykresu. Ogolnie mam kilkanasie danych do wykresu (beda jako wektory),
    // i chcialem aby wykres byl losowany (cala logike mam ogarnieta lecz jeszcze nie napisana), i kuzwa zacialem sie.
    // probowalem przez funkcje statyczna i argumentem chcialem przekazac utworzony obiekt ale
    //nie da sie


    /*DataOfLipids d; // to dziala, ale aby przekazac do wykresu potrzebuje x i y, dwa wektory
    d.loadData();*/
    
    //teraz kombinuje tak ale to juz jutro bo musze zapisac adres funkcji do wskaznika, a juz wracam do domu
    DataOfLipids dx, dy;

    dx.showDataX(DataOfLipids::loadDataX());

    return 0;
}
