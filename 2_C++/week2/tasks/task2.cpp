#include <iostream>

// Function to search for a number in an array
bool searchInArray(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true; // Number found
        }
    }
    return false; // Number not found
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    // Prompt the user to enter a number to search for
    std::cout << "Enter a number to search for: ";
    std::cin >> target;

    // Search for the number in the array
    if (searchInArray(arr, size, target)) {
        std::cout << target << " is in the array." << std::endl;
    } else {
        std::cout << target << " is not in the array." << std::endl;
    }

    return 0;
}
