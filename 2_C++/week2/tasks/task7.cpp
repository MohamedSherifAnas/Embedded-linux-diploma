#include <iostream>
#include <algorithm> // For std::sort
#include <vector>

int main() {
    // Define an array of integers
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    
    // Print the original array
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Sort in ascending order using a lambda function
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b;
    });
    
    // Print the sorted array in ascending order
    std::cout << "Sorted array in ascending order: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Sort in descending order using a lambda function
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a > b;
    });
    
    // Print the sorted array in descending order
    std::cout << "Sorted array in descending order: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
