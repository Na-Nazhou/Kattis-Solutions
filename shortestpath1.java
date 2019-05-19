import java.util.*;

class ShortestPath {
    static long INF = 1_000_000_000;
    static ArrayList<ArrayList<Edge>> adjList;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean first = true;

        while (true) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int q = sc.nextInt();
            int s = sc.nextInt();

            if (n == 0 && m == 0 && q == 0 & s == 0) {
                return;
            }

            if (first) {
                first = false;
            } else {
                System.out.println();
            }

            adjList = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                adjList.add(new ArrayList<Edge>());
            }

            for (int i = 0; i < m; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                long w = sc.nextLong();
                adjList.get(u).add(new Edge(v, w));
            }
            
            long[] D = new long[n];
            shortestPath(s, D);

            for (int i = 0; i < q; i++) {
                long distance = D[sc.nextInt()];
                if (distance < INF) {
                    System.out.println(distance);
                } else {
                    System.out.println("Impossible");
                }
            }

        }
    }

    private static void shortestPath(int start, long[] D) {
        TreeSet<IntegerPair> pq = new TreeSet<IntegerPair>();

        for (int i = 0; i < D.length; i++) {
            if (i == start) {
                pq.add(new IntegerPair(0, i));
                D[i] = 0;
            } else {
                pq.add(new IntegerPair(INF, i));
                D[i] = INF;
            }
        }

        while (!pq.isEmpty()) {
            IntegerPair min = pq.pollFirst();
            int u = min.v;
            D[u] = min.d;
            for (Edge r : adjList.get(u)) {
                relax(pq, D, u, r);
            }
        }
    }

    private static void relax(TreeSet<IntegerPair> pq, long[] D, int u, Edge r) {
        int v = r.end;
        long c = r.cost;
        if (D[v] > D[u] + c) {
            pq.remove(new IntegerPair(D[v], v));
            D[v] = D[u] + c;
            pq.add(new IntegerPair(D[v], v));
        }
    }
}

class IntegerPair implements Comparable<IntegerPair> {
    long d;
    int v;

    public IntegerPair(long d, int v) {
        this.d = d;
        this.v = v;
    }

    @Override
    public int compareTo(IntegerPair other) {
        if (this.d != other.d) {
            return this.d - other.d < 0 ? -1 : 1;
        } else {
            return this.v - other.v;
        }
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        } else if (o instanceof IntegerPair) {
            IntegerPair i = (IntegerPair) o;
            return this.d == i.d && this.v == i.v;
        } else {
            return false;
        }
    }
}

class Edge {
    int end;
    long cost;

    public Edge(int end, long cost) {
        this.end = end;
        this.cost = cost;
    }
}
