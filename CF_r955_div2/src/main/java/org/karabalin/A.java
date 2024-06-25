package org.karabalin;

import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCount = scanner.nextInt();
        for (int i = 0; i < testCount; i++) {
            int x1, y1, x2, y2;
            x1 = scanner.nextInt();
            y1 = scanner.nextInt();
            x2 = scanner.nextInt();
            y2 = scanner.nextInt();
            System.out.println((x1 <= y1 && y2 <= x2) || (y1 <= x1 && x2 <= y2) ? "NO" : "YES");
        }
    }
}
