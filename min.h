#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void maxi(int *wsk ,int rozmiar);
 
void wypisz(int tab[], int rozmiar);
void wczytaj(int tab[], int rozmiar);
 
int main(int argc, char *argv[])
{
 
    int rozmiar;
    cout<<"Ile elementow ma miec tablica?"<<endl;
    cin>>rozmiar;
 
    int *tab= new int[rozmiar];  
 
     wczytaj( tab,rozmiar);
     wypisz(tab,rozmiar);
     maxi(tab,rozmiar);
 
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
 
    for(int i=0; i<rozmiar;i++){
        if ( *(maxi++) < *(wsk++)  )   {
        maxi = wsk;
   }
 
}
   cout<<"maksymalna wartosc to:"<<*maxi<<endl;   
 
 
   for(int i=0; i<rozmiar;i++){
        if ( *(mini++) > *(wsk++)  )   {
        mini = wsk;
   }
 
}
   cout<<"minimalna wartosc to:"<<*mini<<endl;         
 
}