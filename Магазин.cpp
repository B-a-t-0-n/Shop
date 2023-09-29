#include "Shop.h"

void AccountMenu(int Id, Shop &shop) 
{
    int a;
    bool program = true;
    do {
        cout << "1 - открыть корзину\n2 - открыть список товаров\n3 - добавить товар в корзину\n4 - посмотреть баланс\n5 - пополнить баланс\n6 - выход\n";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            shop.account[Id].ShoppingCart();
            break;
        case 2:
            shop.Product();
            break;
        case 3:

            break;
        case 4:
            system("cls");
            cout << "текущий баланс аккаунта " << shop.account[Id].GetSum() << " руб.\n";
            break;
        case 5:
            system("cls");
            shop.account[Id].Put();
            cin.get();
            break;
        case 6:
            program = false;
            system("cls");
            break;
        default:
            system("cls");
            cout << "некоректный ввод\n";
            break;
        }
    } while (program);
    
}

int main()
{
    setlocale(LC_ALL, "rus");
    Shop *shop = new Shop("магазин техники");
    int a;
    bool program = true;
    do {
        cout << "1 - создать аккаунт\t2 - войти в аккаунт\n3 - выход из программы\n";
        cin >> a;
        switch (a)
        {
        case 1:
            shop->Create();
            break;
        case 2:
            int id;
            if (shop->LogIn(id)) 
            {
                AccountMenu(id, *shop);
            }
            break;
        case 3:
            program = false;
            break;
        default:
            system("cls");
            cout << "некоректный ввод\n";
        }
    } while (program);
    
    delete shop;
}
