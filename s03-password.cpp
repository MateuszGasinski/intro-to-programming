#include <iostream>
#include <string>

auto main() -> int
{
    std::cout << "Jakie chcesz ustalic haslo?\n";

    auto password = std::string{};
    std::getline(std::cin, password);

    std::cout << "Podaj ponownie swoje haslo\n";

    auto passcheck = std::string{};
    std::getline(std::cin, passcheck);

    if(passcheck == password)
        {std::cout << "Podano poprawne haslo\n";}
    else
        { while (password != passcheck){
            std::cout << "Nieprawidlowe haslo, wpisz haslo ponownie\n";
            std::getline(std::cin, passcheck);
        }
        std::cout << "Podano poprawne haslo\n";
        }
    return 0;
    }
    


