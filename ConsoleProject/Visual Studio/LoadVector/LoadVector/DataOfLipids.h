#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

class DataOfLipids 
{
private:
	std::vector<double> x;
	std::vector<double> y;
public:

	void loadX();
	void loadY();

	std::vector<double>& getX();
	std::vector<double>& getY();


};

