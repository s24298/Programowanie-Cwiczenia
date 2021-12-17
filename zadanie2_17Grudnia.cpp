#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> filter_palindromes(vector<string> A)
{
    string suma = "";
    vector<string> K ;
    for(int i =0;i<A.size();i++){
        
        string Podane = A[i];
        string Odwrocone = Podane;
        reverse( Odwrocone.begin(), Odwrocone.end() );
        
        if (Podane == Odwrocone) {
          // cout<<A[i];
           suma = suma +A[i]+"\n";
           K.push_back(A[i]);
        }
        else {
            
        }
    }
    
    for(int i =0;i<K.size();i++){
        cout<<"["<<i<<"]: "<<K[i]<<endl;
    }
    
    
    return K;
}
 
int main()
{
    vector<string> u = {"AlA","Mateusz","ABCBA","123321","ZdanieinadZ"};
    string S = "Matematyka";
    filter_palindromes(u);
    
    return 0;
}