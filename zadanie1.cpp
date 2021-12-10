#include <iostream>

using namespace std;

std::string liczby[] = {"2","3","5","7","11","13","17","19"}; 
int i;
std::string suma;
void spacja(){
    
        for(i=0;i<8;i++){
            std::cout<<liczby[i]<<" ";
            suma = suma + liczby[i]+ " ";
        }
        
     std::cout<<suma;
}


int main()
{
    spacja();


    return 0;
}