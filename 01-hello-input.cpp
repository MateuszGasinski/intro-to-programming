/*
 * Ask the user for their credentials. Allow them to decline.
 */


#include <iostream>
#include <string>


auto main() -> int
{
    std::cout << "What's your name? ";

    auto name = std::string{};
    std::getline(std::cin, name);

std::cout << "What's your surname? ";

    auto surname = std::string{};
    std::getline(std::cin, surname);

    if (name.empty()) {
     if (surname.empty()) {
       std::cout << "OK, keep your secrets.\n";
    } else {
        std::cout << "It's you, " << surname << "!\n";
    
  }} else {
     if (surname.empty()) {
    std::cout << "Hi, " << name << "!\n";
    
   } else {
    std::cout << "Hello, " << name << " " << surname <<"!\n";
    
}}
    return 0;
}




