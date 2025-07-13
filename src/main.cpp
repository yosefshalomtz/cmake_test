#include <iostream>
#include "add.h"

int main() {
    int a = 5;
    int b = 3;
    std::cout << "The sum of " << a << " and " << b << " is " << add(a, b) << std::endl;
    return 0;
}