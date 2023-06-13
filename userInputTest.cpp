#include <iostream>

int main() {

    int age;
    std::string name;

    std::cout << "What's your age?" << '\n';
    std::cin >> age;

    std::cout << "What's your full name?" << '\n';
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << std::endl;
    std::cout << "You have " << age << " years old";


    return 0;
}