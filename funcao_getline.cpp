#include <iostream>
#include <string>

int main(){
    std::string your_name;
    std::cout << "What's your full name? ";
    getline(std::cin, your_name);
    std::cout << "Hello, " << your_name << "!" << std::endl;
}
