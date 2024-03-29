//1. Selection and Loops

//Overview

//Introduce conditional statements (if, else if, else) and loops (for, while, do-while) to control the flow of a program based on conditions and repetitive tasks.

//Objectives
//- Understand how to use if-else statements to execute code based on conditions.
// - Learn to use loops to execute code repeatedly under certain conditions.
// - Practice writing nested loops and conditional statements.

// Key Concepts
// - `if`, `else if`, `else` statements
// - `for` loops
// - `while` loops
// - `do-while` loops
// - Nested control structures

// Sample Code

// // Example of if-else and for loop


#include <iostream>
using namespace std;

int main() {
    int score = 85;
    if (score > 90) {
        cout << "You have an A!";
    } else if (score > 75) {
        cout << "Well done\n";
    } else {
        cout << "You can do better";
    }

    for(int i = 0; i < 5; i++) {
        cout << "Loop iteration: " << i << endl;
    }
    return 0;
}
