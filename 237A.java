import java.util.*;

public class FreeCash {
    static boolean areEqual (int[] x, int[] y) {
        if (x[0]==y[0] && x[1]==y[1]) {
            return true;
        } else {
            return false;
        }
    }
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[][] times = new int [n][2];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                times[i][j] = sc.nextInt();
            }
        }

        int ans = 1, curr;

        for (int i = 0; i < n-1; i++) {
            curr = 1;

            while (i+1 < n && areEqual(times[i], times[i+1])) {
                curr++;
                i++;
            }

            if (curr > ans) {
                ans = curr;
            }
        }

        System.out.println(ans);

        sc.close();
    }
}
