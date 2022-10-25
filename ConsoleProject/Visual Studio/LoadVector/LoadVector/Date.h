#pragma once
#include <vector>
#include <fstream>
#include <iostream>
double column1, column2;
std::vector<double> dX, dY;

class Date{
public:

	void loadDateX();
	void loadDateY();
	std::vector<double>& getDataX();
	std::vector<double>& getDataY();
	friend std::ostream& operator << (std::ostream& out, const Date& object);
};

