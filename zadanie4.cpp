#include <iostream>
using namespace std;
std::string imie,m,z;
std::string imiona[5];
int i,mint,zint;



int x =0;
int main()
{
    // cout<<imie.at(imie.length()-1);
    // cout<<imie.length();
    while(x!=5){
       std::cout<<"Podaj imie nr."<<x+1<<":";
       std::cin >> imie ;
       imiona[x] = imie;
       x++;
    }
    
    for(i=0;i<5;i++){
        // std::cout<<imiona[i]<<std::endl;
        if(imiona[i].at(imiona[i].length()-1) == 'a')
        {
            z = z + imiona[i] +",";
            zint++;
        }else{
            m = m + imiona[i] +",";
            mint++;
        }
    }
    z.pop_back();
    m.pop_back();
    
    std::cout<<"\n";
    std::cout<<"Ilosc imion zenskich: "<<zint<<std::endl;
    std::cout<<"Podane imiona zenskie: "<<z<<std::endl;
    std::cout<<"Ilosc imion meskich: "<<mint<<std::endl;
    std::cout<<"Podane imiona meskie: "<<m<<std::endl;
    return 0;
}