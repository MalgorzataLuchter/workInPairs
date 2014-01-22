#include <iostream>
#include "tabli.h"


void showTab(int* tab, int size){
	
	for (int i=0;i<size;i++){
		
		std::cout<<tab[i]<<std::endl;
		
	}
}

int sumValue(inte* tab, int size){
	int suma=0;
	
	for (int i=0;i<size;i++){
		
		suma+=tab[i];
	}
	return suma;
	
}
