#include <iostream>
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include <math.h>
#include "Prostopadloscian.h"

using namespace std;

class Calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

class PositiveCalculator : Calculator
{
public:
    int add(int a, int b)
    {
        if (a < 0 || b < 0)
        {
            return -1;
        }

        return a + b;
    }

    double add(double a, double b)
    {
        if (a < 0 || b < 0)
        {
            return -1;
        }

        return a + b;
    }
};

int main()
{

    FiguraPlaska *figury[3];
    figury[0] = new Prostokat(10, 10);
    figury[1] = new Trojkat(10, 10, 10);
    figury[2] = new Kolo(10);

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << *figury[i] << endl;
        cout << "pole " << figury[i]->Pole() << endl;
        cout << "obwod " << figury[i]->Obwod() << endl;
    }
    cout << endl;

    Prostokat p(2.1, 2.3);
    cout << p << endl;
    p.SetA(6.9);
    p.SetB(1.232);
    cout << p.Pole() << endl;
    cout << p.Obwod() << endl;
    cout << endl;

    Prostokat *p2 = new Prostokat(10, 20);
    cout << *p2 << endl;
    cout << p2->Pole() << endl;
    cout << p2->Obwod() << endl;
    delete p2;
    cout << endl;

    Trojkat *trojkat = new Trojkat(2, 2, 3);
    cout << *trojkat << endl;
    cout << trojkat->GetC() << endl;
    cout << trojkat->Obwod() << endl;
    cout << trojkat->Pole() << endl;
    delete trojkat;
    cout << endl;

    Kolo kolo(5);
    cout << kolo << endl;
    cout << kolo.Pole() << endl;
    cout << kolo.Obwod() << endl;

    Calculator calc;
    PositiveCalculator posCalculator;

    // przeciążanie
    cout << calc.add(2, 3) << endl;
    cout << calc.add(3.5, 31.2) << endl;

    // nadpisywanie
    cout << posCalculator.add(2, 7) << endl;
    cout << posCalculator.add(2, -1) << endl;
    cout << posCalculator.add(5.4, 2.3) << endl;
    cout << posCalculator.add(5.4, -1.2) << endl;

    cout << endl;

    Prostopadloscian sto(1, 2, 3);
    cout << sto.Pole() << endl;
    cout << sto.Pole_boczne() << endl;
    cout << sto.Objetosc() << endl;
    cout << sto << endl;
    cout << sto.GetH() << endl;
}