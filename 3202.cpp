#include <iostream>

void print(std::string a)//F-Poczatek
{
    std::cout<<&a<<" = "<<a<<std::endl;
}//F-Koniec

int main()
{
    std::string b;
    std::cout<<"Podaj b: ";
    std::cin >>b;
    print(b);

    return 0;
}