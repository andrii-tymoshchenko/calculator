#include "helper.h"
#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>

void helper::printString (const std::string& message)
{
    std::cout << message << "\n";
}

void helper::printName()
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;
}

//class Array

//Main list of methods

helper::Array::Array(const int row, const int column)
{
    std::cout << __PRETTY_FUNCTION__  << " rows = " << row << " coumns = " << column << std::endl;
    rows = row;
    columns = column;
    array = new int*[row];
    for(auto index = 0; index < row; index++)
    {
        array[index] = new int[column];
    }
}

void helper::Array::filldata()
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;

    for(auto i = 0; i < rows; i++)
    {
        for(auto j = 0; j < columns; j++)
        {
            array[i][j] = {rand()% UCHAR_MAX};
        }
    }
}

bool helper::Array::equal(helper::Array arrayToCheck)
{
    if (rows != arrayToCheck.getRowsValue() || columns != arrayToCheck.getColumnsValue())
    {
        return false;
    }

    for(auto i = 0; i < rows; i++)
    {
        for(auto j = 0; j < columns; j++)
        {
            if (array[i][j] != arrayToCheck.getValue(i,j))
            {
                return false;
            }
        }
    }
    return true;
}
bool helper::Array::add(helper::Array arrayToAdd)
{
    if (rows != arrayToAdd.getRowsValue() || columns != arrayToAdd.getColumnsValue())
    {
        return false;
    }
    for(auto i = 0; i < rows; i++)
    {
        for(auto j = 0; j < columns; j++)
        {
            array[i][j] += arrayToAdd.getValue(i,j);
        }
    }
    return true;
}
bool helper::Array::subtract(helper::Array arrayToSubtract)
{
    if (rows != arrayToSubtract.getRowsValue() || columns != arrayToSubtract.getColumnsValue())
    {
        return false;
    }
    for(auto i = 0; i < rows; i++)
    {
        for(auto j = 0; j < columns; j++)
        {
            array[i][j] -= arrayToSubtract.getValue(i,j);
        }
    }
    return true;
}
void helper::Array::transpose()
{
    int **tarray;
    tarray = new int*[columns];

    for(auto index = 0; index < columns; index++)
    {
        tarray[index] = new int[rows];
    }

    int temp = 0;

    for(auto i = 0; i < rows; i++)
    {
        for(auto j = 0; j < columns; j++)
        {
            temp = array[i][j];
            tarray[j][i] = temp;
        }
    }

    array = tarray;
    temp = rows;
    rows = columns;
    columns = temp;
}

//Additional methods

int helper::Array::getValue(const int row, const int column)
{
    return array[row][column];
}
void helper::Array::setValue(const int row, const int column, const int value)
{
    array[row][column] = value;
}
int helper::Array::getRowsValue()
{
    return rows;
}
int helper::Array::getColumnsValue()
{
    return columns;
}
void helper::Array::print()
{
    for(auto i = 0; i < rows; i++)
    {
        for(auto j = 0; j < columns; j++)
        {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
