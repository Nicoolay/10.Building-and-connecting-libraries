#include <iostream>
#include <string>
#include <windows.h>
#include "Greeter.h"



int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Greeter greeter;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    greeter.greet(name); 




}
