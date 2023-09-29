#include "Account.h"

Account::Account(int Id, std::string Pasword)
{
	id = Id;
	pasword = Pasword;
}

int Account::GetId()
{
	return id;
}

double Account::GetSum()
{
	return sum;
}

std::string Account::GetPasword()
{
	return pasword;
}

void Account::Put()
{
	double Sum;
	std::string num;
	std::string date;
	std::string cv;
	std::cout << "��� ���������� ������� ������� ����� ����� ���������� ����� :: ";
	std::cin >> num;
	std::cout << "������� ���� �������� � ������� ��/�� :: ";
	std::cin >> date;
	std::cout << "������� cvc2/CVV2-��� :: ";
	std::cin >> cv;
	std::cout << "������� ����� �� ������� �� ������ ��������� ������ :: ";
	std::cin >> Sum;
	sum = Sum;
}

void Account::ShoppingCart()
{
	double Sum = 0;
	for(int i = 0; i< basket.size(); i++)
	{
		std::cout << i + 1 << ") " << basket[i].GetName() << " ���� - " << basket[i].GetPrice()
			<< " ���.\n";
		Sum += basket[i].GetPrice();
	}
	std::cout << "����� " << Sum << " ���.\n";
	std::cout << "1 - ��������\n";
	std::cout << "2 - ������� ����� �� �������\n";
	std::cout << "3 - ����� �� �������\n";
	int a;
	std::cin >> a;
	switch (a)
	{
	case 1:
		if(sum >= Sum)
		{
			sum -= Sum;
			std::cout << "������� ������� ��������� ��� ����� �" << rand() % 100 << std::endl;
			basket.clear();
		}
		else
		{
			std::cout << "�� ����� ����� ������������ ������� ��������� ������ ��� ���������� �������";
		}
		break;
	case 2:
		std::cout << "������� id ������ � ������� ������� ������ �������:: ";
		int b;
		std::cin >> b;
		if (b < basket.size()) 
		{
			b -= 1;
		}
		else 
		{
			std::cout << "�� ����� ������������ id";
		}
		break;
	}
}

Account::~Account()
{
}
