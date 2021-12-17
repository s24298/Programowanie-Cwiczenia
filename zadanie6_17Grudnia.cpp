#include <iostream>
#include <vector>

using namespace std;

struct student{
  
  string imie;
  int srednia;
  
    student(string i,int s){
        imie = i;
        srednia = s;
    }
    
};

void f(vector<student> v){
    int naj = 0;
    string najImie = "";
        for(int i = 0;i<v.size();i++){
            if(v[i].srednia>naj){
                naj = v[i].srednia;
                najImie = v[i].imie;
            }
            //std::cout << v[i].imie << std::endl;
        }
    cout<<naj<<endl;
    cout<<najImie;
    
}
int main()
{
    vector<student> s;
    student s1("mateusz",4);
     student s2("Oki",5);
      student s3("Jonasz",3);
      student s4("Janusz",2);
    s.push_back(s1);
     s.push_back(s2);
      s.push_back(s3);
       s.push_back(s4);
       
       f(s);


    return 0;
}