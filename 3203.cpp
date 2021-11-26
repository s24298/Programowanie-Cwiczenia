#include <iostream>

void print(std::string a)//F-Poczatek
{
    std::cout<<&a<<" = "<<a<<std::endl;
}//F-Koniec

void swap(int a, int b){
    std::cout<<"a: "<<a<<" "<<"b: "<<b<<std::endl;
    std::cout<<&a<<" = "<<"a"<<"  "<<&b<<" = "<<"b"<<std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"a: "<<a<<" "<<"b: "<<b<<std::endl;
    std::cout<<&a<<" = "<<"a"<<"  "<<&b<<" = "<<"b"<<std::endl;
}

int main()
{
    //Zadanie 2
        // std::string b;
        // std::cout<<"Podaj b: ";
        // std::cin >>b;
        // print(b);
    //Zadanie 2 
    //Zadanie 3
        swap(4,10);
    //Zadanie 3
    return 0;
}