#include "calculator.h"
#include "math_functions.h"

int main(int argc, char const *argv[])
{
    Calculator calculator;
    Math_functions mathFunctions;

    if (calculator.Add(1.5,2.5) != 4.0)
      return -1;

    if (calculator.Sub(2.5,0.5) != 2.0)
      return -2;

    if (calculator.Mul(3.0,2.0) != 6.0)
      return -3;

    if (calculator.Pow(2,12) != 4096)
      return -4;

    if (mathFunctions.factorial(5) != 120)
      return -5;
      
    return 0;
}
