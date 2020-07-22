#include <iostream>
#include "calculator.h"

int calculator::Add (double a, double b)
{
    return a + b;
}

int calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int calculator::Mul (double a, double b)
{
    return a * b;
}

int calculator::Pow (int a, int b)
{
   if (b == 0) return 1;
   if (b == 1) return a;

   int temp = Pow(a, b/2);
   if(b%2 == 0) return temp * temp;
   else return a * temp * temp;
}

unsigned long long calculator::factorial (unsigned int n)
{
    unsigned long long fact = 1;

    for (unsigned int i = 1; i <= n; i++ )
      fact *= i;

    return fact;
}

double calculator::makeDouble (int number)
{
    return (double)number;
}

void calculator::printName(void)
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;
}



