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
	std::cout << "для пополнения баланса введите номер вашей банковской карты :: ";
	std::cin >> num;
	std::cout << "введите срок действия в формате мм/гг :: ";
	std::cin >> date;
	std::cout << "введите cvc2/CVV2-код :: ";
	std::cin >> cv;
	std::cout << "введите сумму на которую вы хотите пополнить баланс :: ";
	std::cin >> Sum;
	sum = Sum;
}

void Account::ShoppingCart()
{
	double Sum = 0;
	for(int i = 0; i< basket.size(); i++)
	{
		std::cout << i + 1 << ") " << basket[i].GetName() << " цена - " << basket[i].GetPrice()
			<< " руб.\n";
		Sum += basket[i].GetPrice();
	}
	std::cout << "Всего " << Sum << " руб.\n";
	std::cout << "1 - оплатить\n";
	std::cout << "2 - удалить товар из корзины\n";
	std::cout << "3 - выйти из корзины\n";
	int a;
	std::cin >> a;
	switch (a)
	{
	case 1:
		if(sum >= Sum)
		{
			sum -= Sum;
			std::cout << "Покупка успешно оформлена ваш заказ №" << rand() % 100 << std::endl;
			basket.clear();
		}
		else
		{
			std::cout << "на вашем счёте недостаточно средств пополните баланс для совершения покупки";
		}
		break;
	case 2:
		std::cout << "введите id товара в корзине который хотите удалить:: ";
		int b;
		std::cin >> b;
		if (b < basket.size()) 
		{
			b -= 1;
		}
		else 
		{
			std::cout << "вы ввели неправельный id";
		}
		break;
	}
}

Account::~Account()
{
}
