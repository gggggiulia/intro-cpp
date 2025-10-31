#include <iostream>
#include <cmath>

int main(){
    int f_age, s_age;

    std::cout << "What is the first person's age? ";
    std::cin >> f_age;
    std::cout << "What is the second person's age? ";
    std::cin >> s_age;
    std::cout << "The oldest person is " << fmax(f_age, s_age) << " years old. The youngest is " << fmin(f_age, s_age) << " years old.\n";
}
