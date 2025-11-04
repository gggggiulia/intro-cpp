#include <iostream>
#include <string>

int main(){
    std::string greeting = "hello";
    //this should print "el" on the console
    std::cout << greeting[1] << greeting [2] << std::endl;

    //this should print "hello there"
    std::cout << greeting + " there" << std::endl;

    //this should also print "hello there"
    std::string complete_greeting = greeting + " there";
    std::cout << complete_greeting << std::endl;

    //this should increment the variable complete_greeting;
    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;
}
