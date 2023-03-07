#include "Prostopadloscian.h"
#include <iostream>
#include "Prostokat.h"

using namespace std;

Prostopadloscian::Prostopadloscian(double a, double b, double h)
    : a(a), b(b), h(h)
{
}

void Prostopadloscian::Wypisz(std::ostream &out) const
{
    out << "Prostopadlocian xdd";
}

double Prostopadloscian::Pole()
{
    Prostokat tmp(a, b);
    double result = 0;
    result += 2 * tmp.Pole();
    tmp.SetB(h);
    result += 2 * tmp.Pole();
    tmp.SetA(b);
    result += 2 * tmp.Pole();

    return result;
}

double Prostopadloscian::Pole_boczne()
{
    Prostokat tmp(a, h);
    double result = 0;
    result += 2 * tmp.Pole();
    tmp.SetA(b);
    result += 2 * tmp.Pole();
    return result;
}

double Prostopadloscian::Objetosc()
{
    return a * b * h;
}

double Prostopadloscian::Obwod()
{
    return 0;
}

void Prostopadloscian::SetA(double a)
{
    this->a = a;
}
void Prostopadloscian::SetB(double b)
{
    this->b = b;
}
void Prostopadloscian::SetH(double h)
{
    this->h = h;
}

double Prostopadloscian::GetH()
{
    return h;
}

Prostopadloscian::~Prostopadloscian()
{
    cout << "Desktruktor a: " << a << ", b: " << b << ", h: " << h << endl;
}