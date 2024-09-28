#include <iostream>
#include <ostream>

int main() {
    // Define a lambda function to calculate the square of a number
    auto square = [](int x) {
        return x * x;
    };

    // Test the lambda function
    int num ;

    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num;
    int result = square(num);

    std::cout << "The square of " << num << " is " << result << std::endl;

    return 0;
}

