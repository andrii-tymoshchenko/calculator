#include <iostream>
#include <cstdlib>
#include <ctime>

using func_t = int(*)(int , int);

struct operation_t
{
    char operation;
    func_t function;
};

int add (int , int);
int divide (int , int);
int multiply (int , int);
int subtract (int , int);

int main(int argc, char const *argv[])
{
    std::cout << "<<<<<<HOME WORK 5>>>>>>" << std::endl;

    srand(static_cast<unsigned>(time(nullptr)));

    int num1 = rand() % 100;
    int num2 = rand() % 100;

    std::cout << "Set random values: " << num1 << " and "<< num2 << std::endl;

    operation_t operationItems[] =
    {
        {'1',add},
        {'2',divide},
        {'3',multiply},
        {'4',subtract},
    };

    for(auto item : operationItems)
    {
        std::cout << item.operation << " :";

        switch (item.operation)
        {
        case '1':
            std::cout << " 'add' operation:      Result = ";
            break;
        case '2':
            std::cout << " 'divide' operation:   Result = ";
            break;
        case '3':
            std::cout << " 'multiply' operation: Result = ";
            break;
        case '4':
            std::cout << " 'subtract' operation: Result = ";
            break;
        }

        std::cout << item.function(num1,num2) << std::endl;

    }

    return 0;
}

int add (int element1, int element2)
{
    return element1 + element2;
}
int divide (int element1, int element2)
{
    if(element2 == 0)
    {
        return static_cast<signed>(INT_FAST32_MAX);
    }
    return element1 / element2;
}
int multiply (int element1, int element2)
{
    return element1 * element2;
}
int subtract (int element1, int element2)
{
    return element1 - element2;
}
