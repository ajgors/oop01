#include "Trojkat.h"
#include <math.h>
#include <iostream>

using namespace std;

Trojkat::Trojkat(double a, double b, double c)
    : a(a), b(b), c(c)
{
    cout << "Konstruktor Trojkota(" << a <<"," << b << "," << c << ")" << endl;
}

double Trojkat::GetA() const {
 return a;
}
double Trojkat::GetB() const {
 return b;
}
double Trojkat::GetC() const {
 return c;
}
void Trojkat::SetA(double a) {
 this->a = a;
}
void Trojkat::SetB(double b) {
 this->b = b;
}
void Trojkat::SetC(double c) {
 this->c = c;
}
double Trojkat::Obwod() {
    return a+b+c;
}
double Trojkat::Pole() {
    double h = (a+b+c)/2;
    return sqrt(h*(h-a)*(h-b)*(h-c));
}
void Trojkat::Wypisz(std::ostream& out) const {
    out << "Trojkat, wymiary: " << a << " " << b << " " << c; 
}
Trojkat::~Trojkat() {
    cout << "Desktruktor a: " << a <<", b: " << b << ", c: " << c << endl;
}