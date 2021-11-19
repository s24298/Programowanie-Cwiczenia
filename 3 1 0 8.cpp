
    #include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{


     int i,j,x;
    int rozmiar = 0;
    std::cout<<"Podaj rozmiar: " ;
    std::cin >> rozmiar;
    int tab[rozmiar];
    
        for(i=0;i<rozmiar;i++){
            tab[i] = rand() % 100 + 1;
        }
        
        for(i=0;i<rozmiar;i++){
            std::cout<<tab[i]<<std::endl;
        }    
        
        std::cout<<"\n";
        
    srand (time(NULL));
    
        
        //rozmiar = (sizeof(tab)/sizeof(*tab));
        
        for(i=0;i<rozmiar;i++){
            for(j=0;j<rozmiar;j++){
                
                if(tab[j]<tab[i]){
                    
                    // x = tab[j-1];
                    // tab[j-1] = tab[j];
                    // tab[j] = x;
                    
                        x = tab[i];
                         tab[i] = tab[j];
                          tab[j] = x;
                    
                }
            }
        }
         std::string podloga = "_____________________";
           for(i=0;i<rozmiar;i++){
                std::cout<<podloga<<std::endl;
                std::cout<<"\n";
             std::cout<<"["<<i<<"]-> "<<tab[i]<<" <-["<<i<<"]"<<std::endl;
             std::cout<<podloga<<std::endl;
            }
        
         return 0;
    } 


