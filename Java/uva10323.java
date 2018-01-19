
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Tiffany
 */
public class uva10323 {

    public static BigInteger factorial(BigInteger n) {
        if (n.equals(BigInteger.ONE)) {
            return BigInteger.ONE;
        }
        return n.multiply(factorial(n.subtract(BigInteger.ONE)));
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        while ((str = br.readLine()) != null) {
            if (str.isEmpty()) {
                break;
            }
            long n = Long.parseLong(str);
            if (n < 0) {
                n = Math.abs(n);
                if (n % 2 == 0) {
                    System.out.println("Underflow!");
                } else {
                    System.out.println("Overflow!");
                }
            } else if (n < 8) {
                System.out.println("Underflow!");
            } else if (n > 13) {
                System.out.println("Overflow!");
            } else {
                BigInteger num = new BigInteger(Long.toString(n));
                String ans = factorial(num).toString();
                System.out.println(ans);
            }
        }
    }
}
