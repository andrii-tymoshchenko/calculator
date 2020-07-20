#include <iostream>
#include <bitset>
#include <iomanip>
#include <cmath>

bool equals(double, double, uint8_t precision);
void setBit(int& src, uint8_t bit);
void clearBit(int& src, uint8_t bit);
void revertBit(int& src, uint8_t bit);
bool addVector(const int* src1, const int* src2, int size, int* dst, std::size_t sizedst);

int main(int argc, char *argv[])
{
    std::cout<<std::endl<<">>>>>>>>>>>>Bit operations<<<<<<<<<<<<"<<std::endl;
    int initialNum = 0;
    std::cout<<"Initial value:\t\t\t\t"<<std::bitset<32>(initialNum)<<std::endl;
    setBit(initialNum, 7);
    setBit(initialNum, 1);
    std::cout<<"Value after 1st and 7th bit set:\t"<<std::bitset<32>(initialNum)<<std::endl;
    clearBit(initialNum, 7);
    std::cout<<"Value after 7th bit clear:\t\t"<<std::bitset<32>(initialNum)<<std::endl;
    clearBit(initialNum, 1);
    std::cout<<"Value after 1st bit clear:\t\t"<<std::bitset<32>(initialNum)<<std::endl;
    revertBit(initialNum, 31);
    std::cout<<"Value after 31st bit revert:\t\t"<<std::bitset<32>(initialNum)<<std::endl;
    revertBit(initialNum, 31);
    std::cout<<"Value after 31st bit revert:\t\t"<<std::bitset<32>(initialNum)<<std::endl;

    std::cout<<std::endl<<">>>>>>>>>>>>Comparing of duobles<<<<<<<<<<<<"<<std::endl;
    double d1 = 1.5678;
    double d2 = 1.5678333333;
    std::cout<<"The first value:\t\t\t"<<std::setprecision(10)<<d1<<"\n";
    std::cout<<"The second value:\t\t\t"<<std::setprecision(10)<<d2<<std::endl;
    std::cout<<"The comparing result precision = 5:\t"<<equals(d1,d2,5)<<std::endl;
    std::cout<<"The comparing result precision = 4:\t"<<equals(d1,d2,4)<<std::endl;

    std::cout<<std::endl<<">>>>>>>>>>>>Summ of two vectors<<<<<<<<<<<<"<<std::endl;
    const int arraySize = 10;
    const int array1[arraySize] = {0,1,2,3,4,5,6,7,8,9};
    const int array2[arraySize] = {0,10,20,30,40,50,60,70,80,90};
    size_t dstSize = 10;
    int dstArray[dstSize] = {0};

    addVector(array1,array2,arraySize, dstArray,dstSize);

    std::cout<<"src1\tsrc2\tdst\t"<<std::endl;
    for(auto i=0;i<arraySize;i++)
        std::cout<<array1[i]<<"\t"<<array2[i]<<"\t"<<dstArray[i]<<std::endl;
    return 0;
}

bool equals(double d1, double d2, uint8_t precision)
{
    double epsilon = 1;

    for(auto i = 0; i < precision; i++)
        epsilon /= 10;

    if(std::fabs(d1-d2)<epsilon)
        return true;
    else
        return false;
}
void setBit(int& src, uint8_t bit)
{
    if (bit < 32)
        src |=(1<<bit);
}
void clearBit(int& src, uint8_t bit)
{
    if (bit < 32)
        src &=~(1<<bit);
}
void revertBit(int& src, uint8_t bit)
{
    if (bit < 32)
        src ^=(1<<bit);
}
bool addVector(const int* src1, const int* src2, int size, int* dst, std::size_t sizedst)
{
        if (sizedst < size)
            return false;

        for(auto i=0; i < size; i++)
        {
            dst[i] = src1[i] + src2[i];
        }
        return true;
}
