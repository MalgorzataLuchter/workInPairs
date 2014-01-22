#include <iostream>

 int * createTab()
 {
	int* tab=new double[10];
	int i;
	
	for (i=0;i<10; i++){
		
		tab[i]=i*10;
	}
	return tab;
	
	
}
