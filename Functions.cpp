// 2. Functions

// Overview
// Introduce the concept of functions as reusable blocks of code that perform specific tasks and can return results.

// Objectives
// - Learn to define and call functions.
// - Understand the use of parameters and return types.
// - Explore the concept of function overloading.

// Key Concepts
// - Defining functions
// - Function parameters and arguments
// - Return types
// - Function overloading

// Sample code
// */

#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b);

int main() {
    int result = add(5, 3);
    cout << "The sum is: " << result << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}