package org.karabalin;

import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCount = scanner.nextInt();
        for (int i = 0; i < testCount; i++) {
            int x, y, k;
            x = scanner.nextInt();
            y = scanner.nextInt();
            k = scanner.nextInt();
            for (int j = 0; j < k; j++) {
                ++x;
                if (x >= y) {
                    while (x % y == 0) {
                        x /= y;
                    }
                }
            }
            System.out.println(x);
        }
    }
}
