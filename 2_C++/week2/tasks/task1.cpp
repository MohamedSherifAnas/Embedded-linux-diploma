#include <ostream>
#include <vector>
#include<iostream>
#include <algorithm> // For std::max_element.

//Program to find maxmium number in array

int main()
{

//std::vector<int> Arr{1,22,100,30,50};

int Arr[]={1,22,100,30,50};
int *result=std::max_element(std::begin(Arr),std::end(Arr));
std::cout<<*result<<std::endl;
}