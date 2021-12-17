#include <iostream>
#include <vector>

using namespace std;


int main()
{
    string str = "ALA MA KOTA A KOT MA ALE";
    
   
    for(int i = 0;i<str.length();i++ ){
        if(str.at(i)==' '){
            str.at(i)='\n';

            }
        
        }
      cout<<str<<endl;
    

    return 0;
}