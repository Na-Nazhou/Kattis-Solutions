import java.util.Scanner;

class Autori {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        char[] input = s.nextLine().toCharArray();
        System.out.print(input[0]);
        for (int i = 1; i < input.length; i++) {
            if (input[i] == '-') {
                System.out.print(input[i + 1]);
                i++;
            }
        }
        System.out.println();
    }
}
