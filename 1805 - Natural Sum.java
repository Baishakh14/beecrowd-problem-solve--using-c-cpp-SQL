import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long a, b;
        a = scanner.nextLong();
        b = scanner.nextLong();

        long s = ((a + b) * (b - a + 1)) / 2;
        System.out.println(s);

        scanner.close();
    }
}
