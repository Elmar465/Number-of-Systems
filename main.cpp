#include <iostream>
#include <string>

int main()
{
    int number1 = 15; //Decimal 
    int number2 = 017; // Octa system
    int number3 = 0x0f; //Hexodecimal
    int number4 = 0b00001111; //Binary system 

    std::cout<<"Number 1 :" << number1 << std::endl;
    std::cout<<"Number 2 : "  << number2 << std::endl;
    std::cout<<"Number 3 :" << number3 << std::endl;
    std::cout<<"Number 4 : " << number4 << std::endl;
    return 0;
}