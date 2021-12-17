#include <iostream>
#include <vector>

using namespace std;

int average_of(vector<int> A){
    int dl = A.size();
    int suma = 0;
    for(int i=0;i<dl;i++){
        suma = suma + A[i];
    }
    suma = suma/dl;
    return suma;
}

int main()
{
    vector<int> X = {1,3};
    
    cout<<average_of(X);

    return 0;
}