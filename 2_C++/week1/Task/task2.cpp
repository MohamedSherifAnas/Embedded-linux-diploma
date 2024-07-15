// Program to find the Largest number among three numbers
#include <iostream>
#include <iomanip>

int main()
{

int a;
int b;
int c;
int max;

std::cout << "Please Enter Three number" << std::endl;
std::cin>>a>>b>>c;

max=std::max(a,std::max(b,c));

std::cout<<"the maxmium number is: "<< max<<std::endl;

    return 0;
}