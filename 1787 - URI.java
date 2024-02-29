import java.util.Scanner;

public class Main {
    public static boolean isPowerOfTwo(int n) {
        if (n <= 0 || n % 2 != 0)
            return false;
        int a = n & -n;
        return a == n;
    }

    public static int biggest(int a, int b, int c) {
        return Math.max(Math.max(a, b), c);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            int n = scanner.nextInt();
            if (n == 0) break;

            int u = 0, r = 0, l = 0;
            for (int i = 0; i < n; i++) {
                int ui = scanner.nextInt();
                int ri = scanner.nextInt();
                int li = scanner.nextInt();

                if (isPowerOfTwo(ui)) {
                    if (biggest(ui, li, ri) == ui)
                        u += 2;
                    else
                        u++;
                }
                if (isPowerOfTwo(ri)) {
                    if (biggest(ui, li, ri) == ri)
                        r += 2;
                    else
                        r++;
                }
                if (isPowerOfTwo(li)) {
                    if (biggest(ui, li, ri) == li)
                        l += 2;
                    else
                        l++;
                }
            }

            if (u > r && u > l)
                System.out.println("Uilton");
            else if (r > u && r > l)
                System.out.println("Rita");
            else if (l > r && l > u)
                System.out.println("Ingred");
            else
                System.out.println("URI");
        }
    }
}
