#include<stdio.h>


int codigo,edad_gato,edad_perro,sumaeG,sumaeP,contador_animales,cantG,cantP;
float Pegatos,Peperros; 
int const TOTAL=30;


  int main(void){
  	
  	
  	printf("Bienvenido a la clinica veterinaria\n");
  	
  	sumaeG=0;
  	sumaeP=0;
  	cantG=0;
  	cantP=0;

   for(contador_animales=0;contador_animales<TOTAL;contador_animales++){
   	
   	printf("digite 1 si es gato y o 2 si es perro:       \n");
   	scanf("%i",   &codigo);
   	

   	if(codigo==1){
   		
   		printf("digite la edad del gato:   \n");
   		scanf("%i",    &edad_gato);
   		
   		sumaeG++;
   		cantG++;
   		Pegatos= sumaeG/cantG;
   		
   }else{
   	
   	printf("digite la edad del perro:   \n");
   	scanf("%i",   &edad_perro);
   	
   	sumaeP++;
   	cantP++;
   	
   	
    Peperros= sumaeP/cantP;
    
   	
   }
    
    
	   }
    
    
	    printf("\nel total de gatos es:    %i",     cantG);
     printf("\nel total de perros es:    %i",     cantP);
     
     printf("\nel promedio de gatos es:  %2.f",     Pegatos);
     
     printf("\nel promedio de perros es:   %2.f",    Peperros);
    
    
  return 0;
     
     
 }
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   