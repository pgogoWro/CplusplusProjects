#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

class DataOfLipids 
{
private:

public:
	

	void loadData();

	static void loadDataX();
	static void loadDataY();
	void showDataX(const std::vector<double>& dX);
	void showDataY(const std::vector<double>& dY);


};

