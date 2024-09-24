#include <iostream>
#include <string>
#include <windows.h>
#include "Leaver.h"



int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Leaver leaver;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    leaver.leave(name);




}
