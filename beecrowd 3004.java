import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        while (n-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int d = scanner.nextInt();
            
            if ((a < c && b < d) || (a < d && b < c))
                System.out.println("S");
            else
                System.out.println("N");
        }
        
        scanner.close();
    }
}
