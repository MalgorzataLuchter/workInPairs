#include <iostream>
#include "tabli.h"


boid showTab(double* tab, int size){
	
	for (int i=0;i<size;i++){
		
		std::cout<<tab[i]<<std::endl;
		
	}
}

double sumValue(double* tab, int size){
	double suma=0;
	
	for (int i=0;i<size;i++){
		
		suma+=tab[i];
	}
	return suma;
	
}
