#include<stdio.h>


int suma,edad,contador;
float promedad;

int main(void){
	
	suma=0;
	contador=0;
	
	while(contador<5){
		
			
	printf("introducir edad:    ");
	scanf("%i",    &edad);
	
	suma=suma+edad;
	contador=contador+1;
	
		
	}
	
	promedad= suma/5;

printf("el promedio de edad es:    %2.f",     promedad);


return 0;


}
