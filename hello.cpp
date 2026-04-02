#include <iostream>
#include <string>

void greet(const std::string& str) {
    std::cout << "Greetings, " << str << std::endl;
}

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    greet(name);
    return 0;
}