#include <iostream>

using namespace std;
std::string slow ;
char literka;
int liczba,i;

int count_chars(std::string x,char y){
    int wynik=0;
    
        for(i=0;i<x.length();i++){
            //std::cout<<x.at(i);
            if(y==x.at(i)){
                wynik++;
            }
        }
        
    return wynik;
}

int main()
{
    std::cout<<"Podaj slowo: ";
    std::cin>>slow;
    std::cout<<"Podaj literke: ";
    std::cin>>literka;
    
    std::cout<<count_chars(slow,literka);

    return 0;
}