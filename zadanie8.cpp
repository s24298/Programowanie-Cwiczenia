#include <iostream>

using namespace std;
std::string x;
int y;

void w(std::string slowo,int przeskok){
    std::string suma;
    for(int i=0;i<slowo.length();i+=przeskok){
        suma = suma + slowo.at(i) + ",";
    }
    suma.pop_back();
    std::cout<<suma;
}
int main()
{
    std::cout<<"Podaj slowo: ";
    std::cin>>x;
    std::cout<<"Podaj przeskok: ";
    std::cin>>y;
    
    w(x,y);

    return 0;
}