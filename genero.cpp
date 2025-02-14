#include<stdio.h>

int NEst, CEstGF, CEstGM, CEstNI, Genero, contador;

int main(void){
	
	CEstGF=0;
	CEstGM=0;
	CEstNI=0;
	
	printf("digite el numero de estudiantes:   \n");
		scanf("%i",    &NEst);
	
	do {
		
		printf("digite 1 si es hombre, 2 si es mujer o 3 si prefiere no identificarse:      \n");
		scanf("%i",      &Genero);
		
		switch(Genero){
			
			case 1: ("hombre\n");
			CEstGM++;
				
				break;
				
			case 2 : ("mujer\n");
			CEstGF++;
		     	break;
			
			case 3: ("prefiere no identificarse\n");
			CEstNI++;
			
			     break;
			default:
				
				printf("numero no valido\n");}
			
			
	}
	
	while(Genero<NEst);
	
	
		
	}
		
  
		
		
		
		
		
		
		
		
		
	
	
	
	
	
