#include <iostream>
#include <array>
#include <climits>
#include <cstdlib>
#include <ctime>
#include "helper.h"

using namespace std;

int main()
{ 
    cout << endl << "<<<<HOME WORK 3>>>>" << endl<< endl;

    srand(static_cast<unsigned>(time(nullptr)));

    cout << "=======Sorting an array=======" << endl;

    Helper helper;

    const int size = 20;

    int simpleArray[size] = {};

    for (auto i = 0; i < size; i++)
    {
        simpleArray[i] = rand() % 100;
    }

    cout << "Random array before sorting:\t";

    helper.printArrayValues(simpleArray,size);

    helper.sortArray(simpleArray,size);

    cout << "The array after sorting:\t";

    helper.printArrayValues(simpleArray,size);

    cout << "=======Printing long type number=======" << endl;

    long lnumber = rand() % LONG_MAX;

    cout << "Initial random number = " << lnumber << endl;

    cout << "Result of printBackwardLongRecurcive function calling: ";

    helper.printBackwardLongRecurcive(lnumber);

    cout << endl << endl << "To be continued..." << endl;

    return 0;
}
