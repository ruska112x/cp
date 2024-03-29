import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String original = in.nextLine();
        String input = in.nextLine();
        StringBuffer formattedInput = new StringBuffer();
        boolean operator = false;
        int cursorPosition = 0;
        for (int i = 0; i < input.length(); ++i) {
            char c = input.charAt(i);
            System.out.println(c + ":" + cursorPosition + ":" + operator);
            if (!operator) {
                if (c == '<') {
                    operator = true;
                } else {
                    formattedInput.append(c);
                    ++cursorPosition;
                }
            } else {
                if (c == '>') {
                    operator = false;
                }
                if (c == 'd') {
                    i += 5;
                    if (cursorPosition + 1 < formattedInput.length()) {
                        formattedInput.deleteCharAt(cursorPosition);
                    }
                }
                if (c == 'b') {
                    i += 5;
                    if (cursorPosition - 1 >= 0) {
                        formattedInput.deleteCharAt(cursorPosition - 1);
                    }
                }
                if (c == 'l') {
                    i += 3;
                    cursorPosition = Math.max(0, formattedInput.length() - 1);
                }
                if (c == 'r') {
                    i += 3;
                    cursorPosition = Math.min(formattedInput.length(), formattedInput.length() + 1);
                }
            }
        }
        System.out.println(formattedInput);
    }
}