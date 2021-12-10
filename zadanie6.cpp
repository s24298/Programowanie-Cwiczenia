#include <iostream>

using namespace std;

  int x ;
  int y;
  

bool is_divisible(int liczba,int dzielnik){
    
      bool wynik;
    
          if(liczba%dzielnik==0){
              std::cout<<"Podzielna";
              wynik = true;
          }else{
              std::cout<<"Niepodzielna";
              wynik = false;
          }
          
      return wynik;
}

int main()
{
   
   std::cout<<"podaj liczbe: ";
   std::cin >> x;
   std::cout<<"podaj dzielnik: ";
   std::cin >> y;
   is_divisible(x,y);
   return 0;
}