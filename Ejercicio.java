package Lava;

public class Ejercicio {

	public static void main(String[] args) {
		
		int[] enteros2 = {4,5,8,1,6,3,2,1};
		
		 
		int x=0,y=0;
		// primer ciclo para obtener el mayor absoluto:
		
		for(int i=0; i<enteros2.length;i++) {
			
			if(enteros2[i] > x)
				x= enteros2[i];
			
		}
	
		for(int i=0;i<enteros2.length; i++) {
			
			if(enteros2[i]> y && enteros2[i]< x)
				y= enteros2[i];
			
		}
		 System.out.printf("\n Mayor producto es %d, de %d y %d", x*y,x,y);

	}

}
