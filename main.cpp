#include "calculator.h"
#include "helper.h"

int main(int argc, char const *argv[])
{
    helper::printString("<<<<<<HOME WORK 4>>>>>>\n");

    srand(static_cast<unsigned>(time(nullptr)));

    helper::printString("p.1.1 and p.1.2:\n");
    helper::printName();
    calculator::printName();

    helper::printString("\np.2 - class Array\n");

    helper::printString("Calls:\n");

    std::cout << "Create array1" << std::endl;
    helper::Array array1(10,4);
    array1.filldata();
    std::cout << "Print array1" << std::endl;
    array1.print();

    std::cout << "Create array2:" << std::endl;
    helper::Array array2(10,4);
    array2.filldata();
    std::cout << "Print array2:" << std::endl;
    array2.print();

    std::cout << "Result of calling 'equal' method: " << (array1.equal(array2) ? "True" : "False") << std::endl;

    std::cout << "Call 'add' method" << std::endl;
    array1.add(array2);
    std::cout << "Print array1" << std::endl;
    array1.print();

    std::cout << "Call 'subtract' method array2 - array1" << std::endl;
    array2.subtract(array1);

    std::cout << "Print array2:" << std::endl;
    array2.print();

    std::cout << "Transpose array2" << std::endl;
    array2.transpose();

    std::cout << "Print array2:" << std::endl;
    array2.print();


    helper::printString("\nTo be continued...\n");
    return 0;
}
