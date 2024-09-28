#include <cstdio>
#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <memory>
using namespace std;
int main()
{
    std::shared_ptr<int> sptr=std::make_shared<int>(42);
    std::shared_ptr<int> sptr2=sptr;
    std::weak_ptr<int>wptr=sptr;
    sptr.reset();
    if(wptr.expired())
    {
        std::cout << "Epired" << std::endl;
    }
    else
    {
        std::cout<<"not expired";
    }

}