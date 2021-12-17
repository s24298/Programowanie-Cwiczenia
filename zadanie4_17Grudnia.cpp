#include <iostream>
#include <vector>

using namespace std;

    struct STUDENT {
        string imie;
        string nazwisko;
        std::vector<int> oceny;
        
        
        STUDENT(string i,string n,vector<int> o ){
            imie = i;
            nazwisko = n;
            oceny = o;
        }
        
 
    };
 
    double average_of(vector<int> o){
        double suma = 0;
        for(int i = 0;i<o.size();i++){
                suma = suma + o[i];
            }
           
        suma = suma/o.size();
        return suma;
    }

int main()
{
    string i = "Mateusz";
    string n = "Wrobel";
    vector<int> oceny = {4,3,5,4};
    STUDENT stu(i,n,oceny);
    std::cout << average_of(oceny) << std::endl;

    return 0;
}