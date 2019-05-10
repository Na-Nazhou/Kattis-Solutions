import java.util.*;

class Grid {
    static int m;
    static int n;

    public static boolean insideGrid(int row, int col) {
        return row >= 0 && row < m && col >= 0 &&
            col < n;
    }
    
    public static void updateD(int x, int y, int k, Queue<Integer> q,
            boolean[][] visited, int[][] D) {
        int[] dis_x = { k, -k, 0, 0 };
        int[] dis_y = { 0, 0, k, -k };
        int new_x;
        int new_y;
        
        for (int i = 0; i < 4; i++) {
            new_x = x + dis_x[i];
            new_y = y + dis_y[i];
            if (insideGrid(new_x, new_y) && !visited[new_x][new_y]) {
                D[new_x][new_y] = D[x][y] + 1;
                visited[new_x][new_y] = true;
                q.offer((new_x) * n + new_y);
           }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();
        n = sc.nextInt();
        int[][] arr = new int[m][n];
        int[][] D = new int[m][n];
        for (int i = 0; i < m; i++) {
            String[] line = sc.next().split("");
            for (int j = 0; j < n; j++) {
                arr[i][j] = Integer.parseInt(line[j]);
                D[i][j] = 1_000_000_000;
            }
        }
        
        boolean[][] visited = new boolean[m][n];
        Queue<Integer> q = new LinkedList<>();
        q.offer(0);
        D[0][0] = 0;

        while (!q.isEmpty()) {
            int u = q.poll();
            int x = u / n;
            int y = u - u / n * n;
            int k = arr[x][y];
            if (x == m - 1 && y == n - 1) {
                System.out.println(D[x][y]);
                return;
            } else {
                updateD(x, y, k, q, visited, D);
            }
        }

        System.out.println("-1");
    }
}


