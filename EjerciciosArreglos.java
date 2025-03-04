package Lava;

 

public class EjerciciosArreglos {

	public static void main(String[] args) {
		
		
		int[] enteros = {1,2,3,4,5,6,7,9,10};
		
		int actual= enteros[0];
		 for(int i = 1; i< enteros.length; i++) {
			 
			 if (enteros[i] ==(actual+1)) 
				 
				 actual = enteros[i];
				 
			 else 
				 System.out.printf("\nEl entero que falta es: %d", actual+1);
			 }
		 }

	}


