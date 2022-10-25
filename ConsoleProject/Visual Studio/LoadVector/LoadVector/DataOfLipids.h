#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

class DataOfLipids
{
private:

public:
	static double column1, column2;

	static void loadDataX();
	static void loadDataY();
	static void showDataX();
	static void showDataY();

};

