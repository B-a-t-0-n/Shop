#include "Shop.h"

Shop::Shop(string Name)
{
	name = Name;
	id = 1;
	//technic = {};
}

void Shop::Create()
{
	string pasword[2];
	system("cls");
	cout << "id вашего аккаунта - " << id << endl;
	do {
		cout << "введите пароль от вашего аккаунта ::";
		cin >> pasword[0];
		cout << "введите пароль от вашего аккаунта ещё раз ::";
		cin >> pasword[1];
		if (pasword[0] != pasword[1]) {
			system("cls");
			cout << "id вашего аккаунта - " << id << endl;
			cout << "пароли не совпадают\n";
		}
	} while (pasword[0] != pasword[1]);
	Account* account1 = new Account(id, pasword[1]);
	account.push_back(*account1);
	system("cls");
	cout << "аккаунт успешно создан\n";
	id++;
}

bool Shop::LogIn(int &Id)
{
	system("cls");
	int id;
	string pasword;
	cout << "введите ID аккаунта :: ";
	cin >> id;
	if (id <= account.size() && id > 0) {
		Id = id - 1;
		cout << "введите пароль :: ";
		cin >> pasword;
		if (account[id - 1].GetPasword() == pasword)
			return true;
		else {
			cout << "пароль неподходит\n";
			return false;
		}
	}
	else {
		cout << "данного id несущевствует\n";
		//system("cls");
		return false;
	}
}

void Shop::Product()
{
	system("cls");
	cout << "список товаров:: ";
	for (int i = 0; i < technicAll.size(); i++)
	{
		cout << i <<" № " << "товар " << technicAll[i].GetName() << "  цена " << technicAll[i].GetPrice() << " руб." << endl;
	}
}

Shop::~Shop() 
{

}
