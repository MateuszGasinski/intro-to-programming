#include <iostream>
#include <string>

int main(){

for(int i = 1; i <= 30; i++){
    int fizzz;
    int buzzz;
    fizzz = i % 3;
    buzzz = i % 5;
    std::cout << i;
    std::cout << " ";
    if (fizzz ==0){
        std::cout << "Fizz";
    }
    if (buzzz ==0)
        {std::cout << "Buzz";}
   std::cout << '\n';
    }
    return 0;
    }
    
