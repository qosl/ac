#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, what is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << ", and what is yours?" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << ". Nice to meet you, too!" << std::endl;
    return 0;
}
