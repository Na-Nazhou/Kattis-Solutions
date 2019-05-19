import java.util.*;

class Showroom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        char[][] arr = new char[r][c];
        int[][] D = new int[r][c];

        for (int i = 0; i < r; i++) {
            char[] str = sc.next().toCharArray();
            for (int j = 0; j < c; j++) {
                arr[i][j] = str[j];
                D[i][j] = 1_000_000_000;
            }
        }

        int x = sc.nextInt() - 1;
        int y = sc.nextInt() - 1;

        LinkedList<IntegerPair> q = new LinkedList<>();
        D[x][y] = 1;
        q.addLast(new IntegerPair(x, y));

        int[] disp_x = { 1, -1, 0, 0 };
        int[] disp_y = { 0, 0, 1, -1 };

        while (!q.isEmpty()) {
            IntegerPair u = q.removeFirst();
            for (int i = 0; i < 4; i++) {
                int v_x = u.x + disp_x[i];
                int v_y = u.y + disp_y[i];
                if (check(v_x, v_y, arr, D)) {
                    char next = arr[v_x][v_y];
                    if (next == 'c') {
                        D[v_x][v_y] = D[u.x][u.y] + 1;
                        q.addLast(new IntegerPair(v_x, v_y)); 
                    } else if (next == 'D') {
                        D[v_x][v_y] = D[u.x][u.y];
                        q.addFirst(new IntegerPair(v_x, v_y));
                    }
                }
            }
        }

        int min = 1_000_000_000;
        for (int i = 0; i < r; i++) {
            if (i == 0 || i == r - 1) {
                for (int j = 0; j < c; j++) {
                    if (arr[i][j] == 'D') {
                        min = Math.min(min, D[i][j]);
                    }
                }
            } else if (arr[i][0] == 'D') {
                min = Math.min(min, D[i][0]);
            } else if (arr[i][c - 1] == 'D') {
                min = Math.min(min, D[i][c - 1]);
            }
        }
        System.out.println(min);
    }

    public static boolean check(int x, int y, char[][] arr, int[][] D) {
        return x >= 0 && y >= 0 && x < arr.length && y < arr[0].length && arr[x][y] != '#' && D[x][y] == 1_000_000_000;
    }
}

class IntegerPair {
    int x;
    int y;
    
    public IntegerPair(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}

        
