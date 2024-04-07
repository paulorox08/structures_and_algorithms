//
// Created by Paulo Adeva on 7/4/2024.
//

#include <iostream>
#include <string>

//add function
int add(int a, int b) {
    return a + b;
}

//factorial function
int factorial(int n) {
    int total = 1;

    if (n == 0) {
        return 1;
    }

    while (n != 1) {
        total = n * total;
        n --;
    }
    return total;
}

//standard output
int main() {
    //print something
    std::cout << "Hello World\n";

    //ask for user input then print it out
    std::string userInput;
    std::cin >> userInput;
    std::cout << userInput << "\n";

    //ask for two user inputs and then add them
    std::cout << "Enter first integer\n";
    int firstInput;
    std::cin >> firstInput;

    std::cout << "Enter second integer\n";
    int secondInput;
    std::cin >> secondInput;

    std::cout << "The sum is ";
    std::cout << add(firstInput, secondInput) << '\n';

    std::cout << "Factorial of 5 is " << factorial(5) << "\n";
    return 0;
}




