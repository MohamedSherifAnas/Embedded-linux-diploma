#include <iostream>
#include <iomanip> // For std::setw to format the table

using namespace std;

int main() {
    int maxNumber;

    // Ask the user for the maximum number in the table
    cout << "Enter the maximum number for the multiplication table: ";
    cin >> maxNumber;

    // Print the header row of the table
    cout << "Multiplication Table up to " << maxNumber << endl;

    // Print the column headers
    cout << "    "; // Padding for the header row
    for (int i = 1; i <= maxNumber; ++i) {
        cout << setw(4) << i; // Print the column header with width 4
    }
    cout << endl;

    // Print the horizontal line separating headers from table values
    cout << "    ";
    for (int i = 1; i <= maxNumber; ++i) {
        cout << "----"; // Print a line under each column header
    }
    cout << endl;

    // Print the rows of the table
    for (int i = 1; i <= maxNumber; ++i) {
        cout << setw(2) << i << " |"; // Print the row header with width 2 and a separator
        
        for (int j = 1; j <= maxNumber; ++j) {
            cout << setw(4) << i * j; // Print the multiplication result with width 4
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
