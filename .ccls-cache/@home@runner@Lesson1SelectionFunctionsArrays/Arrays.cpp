// 3. Arrays

// /Overview
// Discuss arrays as a way to store multiple values of the same type in a single variable, and how to manipulate these values.

// Objectives
// - Understand how to declare, initialize, and access arrays.
// - Learn to iterate over arrays using loops.
// - Explore basic array manipulations like searching and sorting.

// Key Concepts
// - Array declaration and initialization
// - Accessing array elements
// - Using loops with arrays
// - Basic array algorithms (e.g., linear search, bubble sort)

// Sample Code
// // */

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {7, 3, 2, 5, 6};

    // Accessing and modifying array elements
    cout << "Third element: " << numbers[2] << endl; 
    numbers[2] = 10; // Modifying the third element

    // Iterating over an array
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}