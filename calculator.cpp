#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b;
}

int Calculator::Pow (int a, int b)
{
   if (b == 0) return 1;
   if (b == 1) return a;

   int temp = Pow(a, b/2);
   if(b%2 == 0) return temp * temp;
   else return a * temp * temp;
}

unsigned long long Calculator::factorial (unsigned int n)
{
    unsigned long long fact = 1;

    for (unsigned int i = 1; i <= n; i++ )
      fact *= i;

    return fact;
}

double Calculator::makeDouble (int number)
{
    return (double)number;
}
