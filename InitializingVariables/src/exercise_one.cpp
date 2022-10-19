#include <iostream>
#include <string>

int main(){
    std::string name;
    int age;
    double hourly_wage {23.50};

    std::cout << "Enter your full name and your age: ";
    std::cin >> name;
    std::cin >> age;


    std::cout << name << " " << age << " " << hourly_wage;
    return 0;
}