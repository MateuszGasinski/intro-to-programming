#include <iostream>
#include <string>
#include <unistd.h>
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
    auto const liczba  = czytansko("Daj cyferke mordo\n");
    for(int i = liczba; i >= 0; i--)    
    {
        std::cout << i;
        std::cout << "...\n";
        sleep(0.1);
    }  
    
}
