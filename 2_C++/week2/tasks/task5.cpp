#include <iostream>

void separateEvenOdd(const int input[], int size, int evens[], int& evenCount, int odds[], int& oddCount) {
    evenCount = 0;
    oddCount = 0;
    
    for (int i = 0; i < size; ++i) {
        if (input[i] % 2 == 0) {
            evens[evenCount++] = input[i]; // Add even numbers to the evens array
        } else {
            odds[oddCount++] = input[i];  // Add odd numbers to the odds array
        }
    }
}

int main() {
    // Define the input array
    int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(input) / sizeof(input[0]);
    
    // Arrays to hold even and odd numbers (with maximum possible sizes)
    int evens[size];
    int odds[size];
    
    int evenCount, oddCount;
    
    // Separate even and odd numbers
    separateEvenOdd(input, size, evens, evenCount, odds, oddCount);
    
    // Output even numbers
    std::cout << "Even numbers: ";
    for (int i = 0; i < evenCount; ++i) {
        std::cout << evens[i] << " ";
    }
    std::cout << std::endl;
    
    // Output odd numbers
    std::cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; ++i) {
        std::cout << odds[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
