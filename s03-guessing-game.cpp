#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

auto czytansko(std::string prompt) -> int
{
    try {
        auto s = std::string{};
        std::cout << prompt;
        std::getline(std::cin, s);
        return std::stoi(s);
    } catch (std::invalid_argument const&) {
        return 0;
    }

    return 0;
}

auto main() -> int
{
srand(time(NULL));
int liczba;
int zgadniecie;
liczba = rand()%101;
int ilosc;
ilosc = 1;
std::cout <<"Zgadnij liczbe od 1 do 100 mordo\n";
std::cin >> zgadniecie;


if(zgadniecie == liczba)
        {std::cout << "Zgadles za 1 razem. DAMN.\n";}
    else
        { while (zgadniecie != liczba){
            ilosc++;
            if(zgadniecie > liczba)
                {std::cout << "Za wysoko!\n";}
            else if(zgadniecie < liczba)
                {std::cout << "Za nisko!\n";}
            std::cin >> zgadniecie;
            
            }
        std::cout << "Brawo, zgadles za " << ilosc << " razem!\n";
return 0;
}}






