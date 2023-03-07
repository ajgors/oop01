#pragma once
#include "Bryla.h"

class Prostopadloscian : public Bryla
{
private:
    double a;
    double b;
    double h;

protected:
    virtual void Wypisz(std::ostream &out) const override;

public:
    Prostopadloscian(double a, double b, double h);

    double GetA();
    double GetB();
    double GetH();

    void SetA(double a);

    void SetB(double b);

    void SetH(double h);

    double Pole() override;
    double Obwod() override;
    double Objetosc();
    double Pole_boczne();
    ~Prostopadloscian() override;
};