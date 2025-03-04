package Lava;

import java.util.Scanner;

public class Ejercicios {

	public static void main(String[] args) {
	
		
		
		
		System.out.printf("cantidad de terminos:   ");
		Scanner scanner= new Scanner(System.in);
		int n = scanner.nextInt();
		
		int a=1 , b=1;
		
		System.out.print("terminos: "+a);
		if(n>1) {
			
			System.out.printf(","+b);
		
		}
		for(int i=3;i<=n;i++) {
			
			int siguiente =a+b;
			System.out.printf(","+ siguiente);
			a=b;
			b= siguiente;
			
		}
		
		System.out.println();
		scanner.close();
		
		
		
		
		
		

	}

}
