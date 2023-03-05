#include "Kolo.h"
#include "math.h"
#include <iostream>

using namespace std;

Kolo::Kolo(double r)
    : r(r)
{
    cout << "Konstruktor Kola(" << r << ")" << endl;
}

void Kolo::Wypisz(std::ostream& out) const{
    out << "Kolo o r: " << r;
};

double Kolo::GetR() const {
    return r;
};

void Kolo::SetR(double r){
    this->r = r;
};

double Kolo::Obwod(){
    return 2*M_PI*r;
};

double Kolo::Pole(){
    return M_PI * pow(r,2);
};

Kolo::~Kolo(){
    cout << "Desktruktor r: " << r << endl;
};