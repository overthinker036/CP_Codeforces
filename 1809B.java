import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        while (t-- > 0) {
            BigDecimal n = scanner.nextBigDecimal();
            BigDecimal sqrtN = sqrt(n, 20);
            BigDecimal ceilSqrtN = sqrtN.setScale(0, RoundingMode.CEILING);
            BigDecimal floorSqrtN = sqrtN.setScale(0, RoundingMode.FLOOR);
            
            if (ceilSqrtN.compareTo(floorSqrtN) == 0) {
                System.out.println(sqrtN.subtract(BigDecimal.ONE).setScale(0, RoundingMode.DOWN));
            } else {
                System.out.println(floorSqrtN.setScale(0, RoundingMode.DOWN));
            }
        }
        
        scanner.close();
    }
  
    public static BigDecimal sqrt(BigDecimal value, int scale) {
        BigDecimal x0 = BigDecimal.ZERO;
        BigDecimal x1 = new BigDecimal(Math.sqrt(value.doubleValue()));
        BigDecimal two = new BigDecimal("2");
        
        while (!x0.equals(x1)) {
            x0 = x1;
            x1 = value.divide(x0, scale, RoundingMode.HALF_UP).add(x0).divide(two, scale, RoundingMode.HALF_UP);
        }
        return x1;
    }
}
