#include <iostream>
#include <string>

int main(){
    std::string greeting = "hello";
    //this should print the characters "e" and "l" on the console.
    std::cout << greeting[1] << greeting [2] << std::endl;

    //this should print "hello there". this method will not modify the content of the variable "greeting".
    std::cout << greeting + " there" << std::endl;

    //this should also print "hello there". this method modifies the content in the variable "complete_greeting" but it doesn't alter the content of "greeting".
    std::string complete_greeting = greeting + " there";
    std::cout << complete_greeting << std::endl;

    //the use of "+=" modifies the content of the variable "complete_greeting", and "greeting" is still unchanged.
    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;
}
