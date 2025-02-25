import java.util.Scanner;

public class cualquiera {

	public static void main(String[] args) {
		Scanner scanner = new Scanner (System.in);
		
		int cantidad_num,num ;
		
		System.out.printf("Ingrese la cantidad de numeros a evaluar:   ");
		cantidad_num= scanner. nextInt();
		
		for(int i =0; i<cantidad_num ;i++) {
			
			System.out.printf("ingrese numero entero:  ");
			num=scanner.nextInt();
			
			if (num %3== 0 && num %5 == 0) {
				System.out.printf("FizzBuzz\n");
			}else if(num % 3 ==0) {
				
			System.out.printf("Buzz\n");
			}else if(num % 5 ==0) {
				System.out.printf("Fizz\n");
			}else {
				System.out.printf("no es multiplo de ninguno.\n");
			}
				
				
			}
		scanner. close(); 
		}
		

	}


