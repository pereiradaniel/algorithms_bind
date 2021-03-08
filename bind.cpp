// Functional - bind a function to its arguments
// bind.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// This program binds the function multiply() to its argumentsand returns the
// corresponding function object.When we call the function object, it returns
// the result for the specified arguments.

#include <iostream>
#include <functional>

double multiply(double x, double y) { return x * y; }

int main() {
    auto p = std::bind(multiply, 10, 3);
    std::cout << "Product = " << p() << std::endl;
}