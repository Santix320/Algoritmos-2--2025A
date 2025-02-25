package Clase2;

import java.util.Scanner;

public class Colectas {

	public static void main(String[] args) {
		
		
		int tope, recolectado, num_personas,aporte_persona; 
		try (Scanner lector = new Scanner (System.in)) {
			recolectado=0;
			tope=0;
			System.out.printf("Cuantas personas van a portar:   ");
			num_personas=lector.nextInt();
			
			
			for(int i=0; i<num_personas;i++) {
				
				System.out.printf("\ncuantos vas a portar?:   ");
				aporte_persona=lector.nextInt();
				recolectado=recolectado+ aporte_persona;
				System.out.printf("recolectado hasta ahora: %d", recolectado);
				
				if(recolectado<=tope) {
					
					break;
				}
			}
		}
		
		

	}

}
