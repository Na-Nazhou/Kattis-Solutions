import java.util.Scanner;

class Fact {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[11];
        arr[1] = 1;
        for (int i = 2; i < 11 && arr[i - 1] != 0; i++) {
            arr[i] = (arr[i - 1] * i) % 10;
        }
        for (int i = 0; i < n; i++) {
            System.out.println(arr[sc.nextInt()]);
        }
    }
}
