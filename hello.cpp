#include <iostream>
#include <string>

void greet(const std::string& str) {
    std::cout << "Greetings, " << str << std::endl;
}

int add(int a, int b) 
{
    return a + b;
}

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    greet(name);
    return 0;
}