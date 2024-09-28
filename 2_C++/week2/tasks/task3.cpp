#include <iostream>
#include <ostream>

void removeElement(int arr[], int& size, int element) {
    // Find the index of the element to remove
    int indexToRemove = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            indexToRemove = i;
            break;
        }
    }
    
    // If element was not found, return
    if (indexToRemove == -1) {
        std::cout << "Element not found in the array." << std::endl;
        return;
    }
    
    // Shift elements to the left
    for (int i = indexToRemove; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    
    // Update the size of the array
    --size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Choose element to remove: ";
    
    int elementToRemove ;
    std::cin>>elementToRemove;
    removeElement(arr, size, elementToRemove);
    
    std::cout << "Array after removing " << elementToRemove << ": ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
