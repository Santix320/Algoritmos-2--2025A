package estudio;

import java.util.Scanner;

public class SerieAlternante {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int inicio = 1, n;
        
        System.out.printf("Ingrese el número de términos: ");
        n = scanner.nextInt();
        
        for (int i = 0; i < n; i++) {
            int termino = (i % 2 == 0) ? (inicio + i) : -(inicio + i);
            System.out.printf(termino + " ");
        }
        
        scanner.close();
    }
}
