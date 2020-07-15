#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
    public:
        int Add (double, double);
        int Sub (double, double);
        int Mul (double, double);
        int Pow (int, int);
        unsigned long long factorial (unsigned int);

        double makeDouble(int);
};

#endif//CALCULATOR_H
