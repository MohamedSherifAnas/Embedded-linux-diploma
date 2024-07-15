#include <iostream>
#include <iomanip>

int main()
{

    std::cout<<"ASCII Code Table: "<<std::endl;
    std::cout<<"+------+-------+"<<std::endl;
    std::cout<<"| Char | ASCII |"<<std::endl;
    std::cout<<"+------+-------+"<<std::endl;

    char a;
    int i;

    for (int i=0; i<256; i++)
    {
        a=i;
        std::cout<<"|" << std::setw(4) << i << std::setw(4) << "|"<< std::setw(4) << a << std::setw(4) << "|" <<std::endl;
         
    }

    return 0;
}