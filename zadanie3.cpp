#include <iostream>

using namespace std;

std::string imie ;
std::string nazwisko ;

int main()
{
    std::cout<<"Podaj imie: ";
    std::cin >>imie;
    std::cout<<"Podaj nazwisko: ";
    std::cin >>nazwisko;

    if(imie.length()>nazwisko.length()){
        std::cout<<"Imie jest dluzsze!";
    }else if(imie.length()<nazwisko.length()){
        std::cout<<"Nazwisko jest dluzsze...";
    }else{
        std::cout<<"Imie i Nazwisko jest takiej samej dlugosci.";
    }


    return 0;
}