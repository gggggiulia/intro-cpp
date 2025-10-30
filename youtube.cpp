#include <iostream>
#include <cmath>

int main(){
    int base, exponent;
    std::cout << "What is the base?: ";
    std::cin >> base;
    std::cout << "What is the exponent?: ";
    std::cin >> exponent;
    std::cout << pow(base, exponent);
}