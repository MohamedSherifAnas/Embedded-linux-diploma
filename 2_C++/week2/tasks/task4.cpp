#include <iostream>

void mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int merged[]) {
    // Copy elements from the first array
    for (int i = 0; i < size1; ++i) {
        merged[i] = arr1[i];
    }
    
    // Copy elements from the second array
    for (int i = 0; i < size2; ++i) {
        merged[size1 + i] = arr2[i];
    }
}

int main() {
    // Define two arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Output the merged array
    std::cout << "First array: ";
    for (int i = 0; i < size1 ; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    // Output the merged array
    std::cout << "Second array: ";
    for (int i = 0; i <size2; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    
    // Create a new array to hold the merged result
    int merged[size1 + size2];
    
    // Merge the arrays
    mergeArrays(arr1, size1, arr2, size2, merged);
    
    // Output the merged array
    std::cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        std::cout << merged[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
