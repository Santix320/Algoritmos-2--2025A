#include<stdio.h>

int suma,edad,contador;
float promedad;

int main(void){
	
	for(contador=0;contador<5;contador++){
		
			printf("introducir edad:    ");
	scanf("%i",    &edad);
	
	suma=suma+edad;
	
		
	}
	
		promedad= suma/5;

printf("el promedio de edad es:    %2.f",     promedad);


return 0;
}