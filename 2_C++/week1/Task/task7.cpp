//Program to change from decmial to binary and vice versa

#include <iostream>
#include <bitset>

int main() 
{
    int decimal_number;
    std::bitset<8> binary_number(0);
    
    std::cout<<" Enter a decimal number: ";
    std::cin>>decimal_number;
    std::cout<<" Binary representation:  "<<std::bitset<8>(decimal_number)<<std::endl;
    
    std::cout<<" Enter a binary number:  ";
    std::cin>>binary_number;
    std::cout<<" Decimal representation: "<<binary_number.to_ulong()<<std::endl;

    return 0;
}