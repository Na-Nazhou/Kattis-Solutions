import java.util.Scanner;
import java.util.Arrays;

class PlantingTrees {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] lst = new int[n];
        
        s.nextLine();
        
        for (int i = 0; i < n; i++) {
            lst[i] = s.nextInt();
        }
        Arrays.sort(lst);

        int count = n;
        for (int i = 0; i < n; i++) {
            lst[i] += count;
            count--;
        }
        
        int max = lst[0];
        for (int i = 1; i < n; i++) {
            if (lst[i] > max) {
                max = lst[i];
            }
        }
        
        System.out.println(max + 1);
    }
}
