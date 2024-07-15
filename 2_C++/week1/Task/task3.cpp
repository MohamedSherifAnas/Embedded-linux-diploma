#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

// Function to check if the given sides form a right-angled triangle
bool isRightAngled(double a, double b, double c) {
    // Find the square of the sides
    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    // Check for the Pythagorean theorem
    return (abs(a2 + b2 - c2) < 1e-9 || 
            abs(a2 + c2 - b2) < 1e-9 || 
            abs(b2 + c2 - a2) < 1e-9);
}

int main() {
    double a, b, c;

    // Input the sides of the triangle
    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cout << "Side 1: ";
    cin >> a;
    cout << "Side 2: ";
    cin >> b;
    cout << "Side 3: ";
    cin >> c;

    // Sort sides so that c is the longest side
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    // Check if the triangle is right-angled
    if (isRightAngled(a, b, c)) {
        cout << "The triangle is right-angled." << endl;
    } else {
        cout << "The triangle is not right-angled." << endl;
    }

    return 0;
}
