#include "math_functions.h"

unsigned long long Math_functions::factorial (unsigned int n)
{
    unsigned long long fact = 1;

    for (unsigned int i = 1; i <= n; i++ )
      fact *= i;

    return fact;
}
