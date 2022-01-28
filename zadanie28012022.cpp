#include <iostream>
#include <vector>
using namespace std;

struct przelacznik{
  
  std::string description;
  bool toggled = false;
  
    void toggle(){
        
        if(toggled==false) {
            toggled = true;
        }else{
            toggled = false;
        }
        
    }
  
  
    bool is_on(){
        bool ok;
        if(toggled==true)  ok = true;
        if(toggled==false)  ok = false;
        return ok;
    }
    

    
};

struct button{
  
  std::string description;
  bool toggled = false;
  
    bool is_on(){
        bool ok;
        if(toggled==true){
            ok = true;
        } 
        
        if(toggled==false) {
            ok = false;
        }
        return ok;
    }
    
    void push(){
        
        // "Aby metoda i funkcjonalność zadziałała, musisz skorzystać z referencji."
        //  Tak jest w zadaniu ale mi noramlnie dziala. 

        if(toggled ==false){
            toggled = true;
        }
 
    }
    
    
};

struct knob{
  
  string description;
  float pokretlo = 1;
  
    void twist_to(float przesuniecie){
        
        pokretlo+=przesuniecie;
        
        if(pokretlo>=360.0){
            pokretlo -=360;
        }else if(pokretlo<=0.0){
            pokretlo += 360;
        }
 
    }
    
};

struct option_panel{
    vector<przelacznik> przelaczniki;
    vector<button> guziki;
    vector<knob> pokretla;
    
    option_panel(vector<przelacznik> p,vector<button> g, vector<knob> k){
        przelaczniki = p;
        guziki = g;
        pokretla = k;
    }
    
    bool is_active(){
        bool wszystko;
        bool okPrzelaczniki;
        bool okGuziki;
        bool okKorba;
        int wlaczone = 0;
        int wylaczone = 0;
        //PRZELACZNIKI
        for(int i = 0; i<przelaczniki.size();i++){
            if(przelaczniki[i].toggled==true){
                wlaczone++;
            }else{
                wylaczone++;
            }
        }
        
         cout<<"ON:"<<wlaczone<<"\nOFF:"<<wylaczone<<endl;
        
        if(wlaczone>wylaczone){
            okPrzelaczniki = true;
        }
        //GUZIKI
        for(int i = 0; i<guziki.size();i++){
            if(guziki[i].toggled==true){
                okGuziki = true;
                cout<<"GUZIKI:OK"<<endl;
                break;
            }
        }
        //POKRETLO
        for(int i = 0; i<pokretla.size();i++){
            if(pokretla[i].pokretlo>=270){
                okKorba = true;
                cout<<"KORBA:OK"<<endl;
                break;
            }
        }
        
        if(okPrzelaczniki==true && okGuziki==true && okKorba==true){
            wszystko = true;
        }
       
        if(wszystko==true){
            cout<<"METODA ZWRACA: TRUE"<<endl;
        }else{
             cout<<"METODA ZWRACA: FALSE"<<endl;
        }
        
        return wszystko;
    }
    
};

typedef struct Point{
  
  int x;
  int y;
  
};

typedef struct Circle{
  
  Point punkt;
  float promien;
};

typedef struct Square{
  
  Point punkt;
  float bok;
      
    
};

typedef struct fuel_tank{
  int pojemnosc ; 
  
  int take(int x){
      pojemnosc -= x;
      int to = 0;
      if(pojemnosc<=0){
          to = 0;
      }else{
          to = pojemnosc;
      }
      
      return to;
  }
  
};

typedef struct engine{
  
  int spalanie;
  vector<fuel_tank> kontenery;
  
  engine(int s, vector<fuel_tank> k){
      spalanie = s;
      kontenery = k;
  }
    
    void jedz(){
        int i = 0;
        int a ;
        while(kontenery.size()!=0){
            cout<<"Chcesz jechac dalej(0 STOP)? W obecnym baku pozostalo ci: "<<kontenery[i].pojemnosc<<".\nPozostale baki:"<<kontenery.size()-1<<endl;
            cout<<": ";
            cin>>a;
                if(a==0){
                    break;
                }
            
                if(kontenery[i].pojemnosc>spalanie){
                    kontenery[i].take(spalanie);
                }else{
                     cout<<"Odpadl bak paliwa "<<endl;
                    kontenery.erase(kontenery.begin());
                }
                
            
            
        }
        cout<<"Koniec paliwa";
    }   
    
};


//ZAD 8
void is_inside(Square s1,Square s2){
    if((s1.bok*s1.bok)>(s2.bok*s2.bok)){
        cout<<"Drugi kwadarat jest zasloniety"<<endl;
    }
}

void is_inside(Circle c1,Circle c2){
    
    if( ((c1.promien*c1.promien)*3.14) > ((c2.promien*c2.promien)*3.14) ){
        cout<<"Drugie kolo jest zasloniete"<<endl;
    }
}

void is_inside(Square s1,Circle c2){
        if( (s1.bok*s1.bok) > ((c2.promien*c2.promien)*3.14) ){
        cout<<"Kolo jest zasloniete"<<endl;
    }
}

void is_inside(Circle c1,Square s2){
        if( ((c1.promien*c1.promien)*3.14) > (s2.bok*s2.bok) ){
        cout<<"Kwadarat jest zasloniety"<<endl;
    }
}

//Lepiej by to stalo na zawnatrz poniewaz jest to uniezaleznione od istnienia obektow danego typu.


int main()
{
     //ZADANIE1
     cout<<"ZADANIE1"<<endl;
     przelacznik s;
     std::cout << s.is_on() << std::endl;
     s.toggle();
     std::cout << s.is_on() << std::endl;
     s.toggle();
     std::cout << s.is_on() << std::endl;
    //ZADANIE1 - koniec
    
    //ZADANIE2 
    cout<<"\nZADANIE2"<<endl;
    button guzik;
    guzik.toggled = false;
    
    cout<<"Guzik: "<<guzik.toggled<<endl;
    guzik.push();
    cout<<"Guzik: "<<guzik.toggled<<endl;
    //ZADANIE2 - koniec
    
    cout<<"\nZADANIE3"<<endl;
    knob w;
    w.pokretlo = 350;
    cout<<w.pokretlo<<endl;
    w.twist_to(25);
    cout<<w.pokretlo<<endl;
    
    cout<<"\nZADANIE4"<<endl;
    vector<przelacznik> P;
        przelacznik p1;
        przelacznik p2;
        p2.toggled = true;
        przelacznik p3;
        p3.toggled = true;
        P.push_back(p1);
        P.push_back(p2);
        P.push_back(p3);
    vector<button> B;
        button b1;
        b1.toggled = true;
        B.push_back(b1);
    vector<knob> K;
        knob k1;
        k1.pokretlo = 270;
        K.push_back(k1);

    option_panel OP(P,B,K);
    OP.is_active();
    
    cout<<"\nZADANIE5"<<endl;
    Point punkt1;
    punkt1.x = 3;
    punkt1.y = 6;
    
    cout<<"\nZADANIE6"<<endl;
    Circle kolo1;
    kolo1.promien = 3;
    kolo1.punkt = punkt1;
    Circle kolo2;
    kolo2.promien = 5;
    kolo2.punkt = punkt1;
    
    cout<<"\nZADANIE7"<<endl;
    Square kwadrat1;
    kwadrat1.punkt = punkt1;
    kwadrat1.bok = 5;
    Square kwadrat2;
    kwadrat2.punkt = punkt1;
    kwadrat2.bok = 7;
    
    cout<<"\nZADANIE8"<<endl;
    is_inside(kolo2,kolo1);
    is_inside(kwadrat2,kwadrat1);
    is_inside(kwadrat2,kolo1);
    
    cout<<"\nZADANIE9"<<endl;
    fuel_tank bak1;
    bak1.pojemnosc = 10;
    cout<<bak1.take(6)<<endl;
    
    cout<<"\nZADANIE10"<<endl;
    fuel_tank bak2;
    bak2.pojemnosc = 2;
    fuel_tank bak3;
    bak3.pojemnosc = 20;
    
    vector<fuel_tank> zbiorniki;
    zbiorniki.push_back(bak1);
    zbiorniki.push_back(bak2);
    zbiorniki.push_back(bak3);
    
    engine silnik(5,zbiorniki);
    silnik.jedz();
    return 0;
}
