#include "Greeter.h"
#include <string>
#include <iostream>

void Greeter::greet(std::string name) {
	std::cout << "Здравствуйте, " << name << "!";
}