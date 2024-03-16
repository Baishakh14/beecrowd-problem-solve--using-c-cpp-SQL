import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        int i = 0;
        while ((n = scanner.nextInt()) != -1) {
            System.out.println("Experiment " + (++i) + ": " + (n / 2) + " full cycle(s)");
        }
        scanner.close();
    }
}
