#include<stdio.h>

int suma,edad,contador;
float promedad;

int main(void){
	
	suma=0;
	contador=0;
	
	do {
	
	printf("introducir edad:    ");
	scanf("%i",    &edad);
	
	suma=suma+edad;
	contador=contador+1;
}


while(contador<5);


promedad= suma/5;

printf("el promedio de edad es:    %2.f",     promedad);



return 0;

}