#include "Technic.h"

Technic::Technic(std::string Name, double Price)
{
    name = Name;
    price = Price;
}

std::string Technic::GetName()
{
    return name;
}

double Technic::GetPrice()
{
    return price;
}
