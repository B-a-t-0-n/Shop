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
	cout << "id ������ �������� - " << id << endl;
	do {
		cout << "������� ������ �� ������ �������� ::";
		cin >> pasword[0];
		cout << "������� ������ �� ������ �������� ��� ��� ::";
		cin >> pasword[1];
		if (pasword[0] != pasword[1]) {
			system("cls");
			cout << "id ������ �������� - " << id << endl;
			cout << "������ �� ���������\n";
		}
	} while (pasword[0] != pasword[1]);
	Account* account1 = new Account(id, pasword[1]);
	account.push_back(*account1);
	system("cls");
	cout << "������� ������� ������\n";
	id++;
}

bool Shop::LogIn(int &Id)
{
	system("cls");
	int id;
	string pasword;
	cout << "������� ID �������� :: ";
	cin >> id;
	if (id <= account.size() && id > 0) {
		Id = id - 1;
		cout << "������� ������ :: ";
		cin >> pasword;
		if (account[id - 1].GetPasword() == pasword)
			return true;
		else {
			cout << "������ ����������\n";
			return false;
		}
	}
	else {
		cout << "������� id �������������\n";
		//system("cls");
		return false;
	}
}

void Shop::Product()
{
	system("cls");
	cout << "������ �������:: ";
	for (int i = 0; i < technicAll.size(); i++)
	{
		cout << i <<" � " << "����� " << technicAll[i].GetName() << "  ���� " << technicAll[i].GetPrice() << " ���." << endl;
	}
}

Shop::~Shop() 
{

}
