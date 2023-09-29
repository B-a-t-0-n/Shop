#pragma once
#include <iostream>
#include <vector>
#include "Technic.h"

class Account
{
private:
	int id;
	std::string pasword;
	double sum = 0;
	std::vector<Technic> basket;

public:
	Account(int Id, std::string Pasword);
	int GetId();
	double GetSum();
	std::string GetPasword();
	void Put();
	void ShoppingCart();
	~Account();
};

