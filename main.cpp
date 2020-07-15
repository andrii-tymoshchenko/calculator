#include "calculator.h"
#include "helper.h"

//#define USE_STRING_FUNC

int main(int argc, char const *argv[])
{
    Calculator calculator;
    Helper helper;

    int result = 0;

    if (calculator.Add(1.5,2.5) != 4.0)
      result -= 1;

    if (calculator.Sub(2.5,0.5) != 2.0)
      result -= 2;

    if (calculator.Mul(3.0,2.0) != 6.0)
      result -= 3;

    if (calculator.Pow(2,12) != 4096)
      result -= 4;

    if (calculator.factorial(5) != 120)
      result -= 5;

#ifdef USE_STRING_FUNC
    helper.printString("Used USE_STRING_FUNC define and called printString function");
#else
    std::cout << "Called makeDouble function: "<< calculator.makeDouble(result) << "\n";
#endif

    return 0;
}
