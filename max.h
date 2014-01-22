#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
void maxi(int *wsk ,int rozmiar);
 
void wypisz(int tab[], int rozmiar);
void wczytaj(int tab[], int rozmiar);
 void sortuj( int *wsk, int rozmiar);
void posortowana(int *wsk, int rozmiar);
int main(int argc, char *argv[])
{
     srand(time(NULL));
    int rozmiar;
    cout<<"Ile elementow ma miec tablica?"<<endl;
    cin>>rozmiar;
 
    int *tab= new int[rozmiar];   
 
     wczytaj( tab,rozmiar);
     wypisz(tab,rozmiar);
     maxi(tab,rozmiar);
 
      sortuj(tab, rozmiar);
        posortowana(tab,rozmiar);
    delete [] tab;
 
    return 0;
}
//*********************************
void wczytaj(int tab[], int rozmiar){
 
for (int i=0; i<rozmiar; i++)
        tab[i]=rand()/100;
}
 
//********************************
 
void wypisz(int tab[], int rozmiar){
 
    for(int i=0; i<rozmiar; i++)
        cout<<tab[i]<<endl;
}
 
//********************8
void maxi(int *wsk, int rozmiar){
 
   int *maxi;
   maxi=wsk;   // ustawienie maxi na pocz¹tek tablicy
   int *mini;
   mini=wsk;   
 
    for(int i=0; i<rozmiar;i++,wsk++){
        if ( *(maxi) < *(wsk)  )   {
        (maxi) = (wsk);
   }
 
   else if ( *(mini)  > *(wsk) )
 mini = wsk;
}
 
 
  cout<<"maksymalna wartosc to:"<<*maxi<<endl;   
   cout<<"minimalna wartosc to:"<<*mini<<endl;         
 
}
 //**************************************************
void sortuj( int *wsk, int rozmiar){
    bool wszystko=false;    // ustawienie zmiennej wszystko na false
    int temp;  // zmienna pomocnicza
 
    while(wszystko == false){    // rob dopoki wszystko = false, czyli dopoki tablica jest nieuporz¹dkowana
        wszystko=true;           
 
        for(int i=1; i<rozmiar; i++){
            if( *(wsk+i) < *(wsk) ){
                wszystko=false;
                temp=*(wsk+i);
                *(wsk+i)=*(wsk);
                *(wsk)=temp;                    
            }                        
        }        
 
    }
 
}
 
//*********************************************
void posortowana(int *wsk, int rozmiar){
    cout<<"Tablica po sortowaniu:"<<endl;
 
    for(int i=0; i<rozmiar; i++)
        cout<<*(wsk+i)<<endl;