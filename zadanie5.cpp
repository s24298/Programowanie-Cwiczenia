#include <iostream>

using namespace std;

  int x ;
  
bool is_even(int liczba){
    
      bool wynik;
    
          if(liczba%2==0){
              std::cout<<"parzysta";
              wynik = true;
          }else{
              std::cout<<"nieparzysta";
              wynik = false;
          }
          
      return wynik;
}

int main()
{
   
   std::cout<<"podaj liczbe: ";
   std::cin >> x;
   is_even(x);
   return 0;
}