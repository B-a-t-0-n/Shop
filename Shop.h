#pragma once
#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;

class Shop
{
private:
	string name;
	std::vector<Technic> technicAll;
	int id;
public:
	std::vector<Account> account;
	Shop(string Name);
	void Create();
	bool LogIn(int &Id);
	void Product();
	~Shop();//доделать избавиться от утечьки памяти создаваемых классов
};

