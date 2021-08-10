#include "goodbye.h"
#include <string>
#include <iostream>


void SayGoodbye() {
std::cout << "Как тебя зовут?: \n";
std::string myName;
std::cin >> myName;
std::cout << "Your name is \n" << myName << "\n";
}