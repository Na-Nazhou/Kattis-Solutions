import java.util.*;

class APSP {
    static long INF = 1_000_000_000;

    public static void updateD(int i, long[][] D) {
        for (int j = 0; j < D.length; j++) {
            for (int k = 0; k < D.length; k++) {
                if (D[j][i] < INF && D[i][k] < INF) {
                    D[j][k] = -INF;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean first = true;

        while(true) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int q = sc.nextInt();
            if (n == 0 && m == 0 && q == 0) {
                break;
            }
            
            if (first) { 
                first = false;
            } else {
                System.out.println();
            }
            
            long[][] D = new long[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    D[i][j] = INF;
                }
                D[i][i] = 0;
            } 

            for (int i = 0; i < m; i++) { 
                int a = sc.nextInt();
                int b = sc.nextInt();
                D[a][b] = Math.min(D[a][b], sc.nextLong());
            }

            for (int k = 0; k < n; k++) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (D[i][k] != INF && D[k][j] != INF) {
                            D[i][j] = Math.min(D[i][j], D[i][k] + D[k][j]);
                        }
                    }
                }
            }

            for (int i = 0; i < n; i++) {
                if (D[i][i] < 0) {
                    D[i][i] = -INF;
                    updateD(i, D);
                }
            }

            for (int i = 0; i < q; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                if (D[u][v] >= INF) {
                    System.out.println("Impossible");
                } else if (D[u][v] <= -INF) {
                    System.out.println("-Infinity");
                } else {
                    System.out.println(D[u][v]);
                }
            }
        }
    }

    public static void printMatrix(long[][] D) {
        for (int i = 0; i < D.length; i++) {
            for (int j = 0; j < D.length; j++) {
                System.out.printf("%10d ", D[i][j]);
            }
            System.out.println();
        }
    }

}

