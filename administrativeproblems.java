import java.util.*;

class AdministrativeProblems {
    public static void main(String[] args) {
        Scanner sc = new Scammer(System.in);
        int numOfTestCases = sc.nextInt();
        TreeMap<String, Spy> spies = new TreeMap<>();
        HashMap<String, Integer> catalog_price = new HashMap<>();
        HashMap<String, Integer> pick_up = new HashMap<>();
        HashMap<String, Integer> cost_perkm = new HashMap<>();

        for (int test = 0; test < numOfTestCases; test++) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            for (int car = 0; car < n; car++) {
                String N = sc.next();
                int p = sc.nextInt();
                catalog_price.put(N, p);
                int q = sc.nextInt();
                pick_up.put(N, q);
                int k = sc.nextInt();
                cost_perkm.put(N, k);
            }

            for (int event = 0; event < m; event++) {
                int t = sc.nextInt();
                String S = sc.next();
                char e = sc.next().charAt(0);
                switch (e) {
                    case 'p':
                        String C = sc.next();
                        Spy spy = new Spy(S, C);
                        spy.cost += pick_up.get(C);
                        spies.add(spy);
                        break;
                    case 'r':
                        int d = sc.nextInt();
                        Spy spy = spies.get(S);
                        spy.cost += d * cost_perkm.get(spy.car); 
                        break;
                    case 'a':
                        int s = sc.nextInt();
                        Spy spy = spies.get(S);
                        spy.cost += (ints * catalog_price.get(spy.car) / 100);
                        break;
                    default:
                }
            }

            for (

            

        }
    }
}

class Spy {
    String name;
    int cost;
    int state;
    String car;

    public Spy(String name, String car) {
        this.name = name;
        this.car = car;
    }

    public String toString() {
        if (cost < 0) {
            return name + " INCONSISTENT";
        } else {
            return name + " " cost;
        }
    }
}

