#include "Prostokat.h"
#include <iostream>

using namespace std;

Prostokat::Prostokat(double a, double b)
    : a(a), b(b)
{
    cout << "Konstruktor Prostokąta(" << a <<"," << b << ")" << endl;
}

double Prostokat::GetA() const {
 return a;
}
double Prostokat::GetB() const {
 return b;
}
void Prostokat::SetA(double a) {
 this->a = a;
}
void Prostokat::SetB(double b) {
 this->b = b;
}
double Prostokat::Obwod() {
    return this->a*2 + this->b*2;
}
double Prostokat::Pole() {
    return this->a * this->b;
}
void Prostokat::Wypisz(std::ostream& out) const {
    out << "Prostokat, wymiary: " << this->a << " " << this->b; 
}
Prostokat::~Prostokat() {
    cout << "Desktruktor a: " << a <<", b: " << b << endl;
}