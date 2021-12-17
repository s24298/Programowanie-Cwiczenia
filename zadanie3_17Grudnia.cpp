#include <iostream>
#include <vector>
using namespace std;

void f(vector<int> A , vector<int> B){
    
    int suma = 0;
    
    if(A.size()!=B.size()){
        cout<<"nie takiej samej dlugosci";
        return;
    }
    
    for(int i = 0 ; i<A.size();i++){
        for(int j = 0; j<B.size();j++){
            
            if(i==j){
                suma = suma +(A[i]*B[j]);
            }
        }
    }
    cout<<suma;
}


int main()
{
    vector<int> X = {1,-1,1};
    vector<int> Y = {1,2,1};
    
    f(X,Y);

    return 0;
}