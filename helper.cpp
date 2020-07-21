#include <iostream>
#include "helper.h"

void Helper::printArrayValues (const int* arraySrc, const int size)
{
    for(auto i = 0;i < size;i++)
    {
        std::cout << arraySrc[i] << " ";
    }
    std::cout << std::endl;
}

void Helper::sortArray (int* arraySrc, const int size)
{
    int temp = 0;

    for(auto i = 0;i < size;i++)
    {
        for(auto j = 0;j < size-i-1;j++)
        {
            if(arraySrc[j+1] < arraySrc[j])
            {
                temp = arraySrc[j+1];
                arraySrc[j+1] = arraySrc[j];
                arraySrc[j] = temp;
            }
        }
    }
}

void Helper::printBackwardLongRecurcive(long longNumer)
{
    std::cout << longNumer%10 << " ";

    if (longNumer/10 != 0)
    {
        printBackwardLongRecurcive(longNumer/10);
    }
}
