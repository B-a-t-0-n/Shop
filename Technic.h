#pragma once
#include<iostream>

class Technic
{
private:
	std::string name;
	double price;
public:
	Technic(std::string Name, double Price);
	std::string GetName();
	double GetPrice();
};

