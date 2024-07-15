// C++ program to sum the digits of integer entered by user

#include <iostream>
#include <string>

// Driver code
int main()
{
    int num=0;
    int sum=0;

    std::cout<<"Enter an integer: ";
    std::cin>>num;

    std::string numStr= std::to_string(num);

    for(char digitChar : numStr)
    {
        int digit = digitChar - 48;
        sum += digit;
    }
    std::cout<<"Sum of Digits Of "<<num<<" is: "<<sum<<std::endl;

	return 0;
}
