#ifndef HELPER_H
#define HELPER_H

#include <iostream>

namespace helper
{
    void printString (const std::string&);
    void printName (void);

    class Array
    {
        Array() = delete;

    private:
        int rows;
        int columns;
        int **array;

    public:
        Array(const int row, const int column);
        void filldata();
        bool equal(helper::Array arrayToCheck);
        bool add(helper::Array arrayToAdd);
        bool subtract(helper::Array arrayToSubtract);
        void transpose();
        int getValue(const int row, const int column);
        void setValue(const int row, const int column, const int value);
        int getRowsValue();
        int getColumnsValue();
        void print();
    };
}



#endif//HELPER_H
