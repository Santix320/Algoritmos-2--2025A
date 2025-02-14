#include <stdio.h>

float ventas, comision;

int main(void)
{
	printf("ventas:  ");
	scanf("%f",   &ventas);
	
	if (ventas>= 2000000){
		
		// si tienes ventas mayor o igual a 2000000 aparece este mensaje
		printf(" tienes derecho al 0.10 de comision\n");
		
		// se hacela multipliacion y se muestra el valor 
         comision = ventas * 0.1;
    
         printf("comicion recibida;   %f\n", comision );
	    }else{
	    
	    (ventas=1000000);
	    
	    printf(" tienes derecho al 0.05 de comision");
	    comision = ventas * 0.05;
	    
	    printf("comisicion recibida;   %f\n", comision);
	    
	    	
	    
		}
	
	     
	
	     
	
	
	return 0;
	
	
	
}