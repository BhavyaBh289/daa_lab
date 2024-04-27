import java.util.*;

public class tsp {
    static int MAX = Integer.MAX_VALUE;

    static int fun(int i, int mask, int n, int[][] dist, int[][] memo) {
        if (mask == ((1 << i) | 1))
            return dist[i][0];
        if (memo[i][mask] != 0)
            return memo[i][mask];

        int res = MAX;
        for (int j = 1; j < n; j++) {
            if ((mask & (1 << j)) != 0 && j != i) {
                res = Math.min(res, fun(j, mask & (~(1 << i)), n, dist, memo) + dist[j][i]);
            }
        }
        return memo[i][mask] = res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of cities: ");
        int n = scanner.nextInt();
        int[][] dist = new int[n][n];

        System.out.println("Enter the distance matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = scanner.nextInt();
            }
        }

        int[][] memo = new int[n][1 << n];

        int ans = MAX;
        for (int i = 1; i < n; i++) {
            ans = Math.min(ans, fun(i, (1 << n) - 1, n, dist, memo) + dist[i][0]);
        }
        System.out.println("The cost of the most efficient tour = " + ans);

        scanner.close();
    }
}
