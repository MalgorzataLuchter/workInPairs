#include <iostream>
#include "tabli.h"


void showTab(int* tab, int size){
	
	for (int i=0;i<size;i++){
		
		std::cout<<tab[i]<<std::endl;
		
	}
}

int sumValue(int* tab, int size){
	int suma=0;
	
	for (int i=0;i<size;i++){
		
		suma+=tab[i];
	}
	return suma;
	
}
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
