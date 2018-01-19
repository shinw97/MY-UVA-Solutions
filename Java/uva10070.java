
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
 * @author LSW
 */
class uva10070 {

    public static boolean isLeap(BigInteger year) {
        BigInteger fourhundred = new BigInteger("400");
        BigInteger four = new BigInteger("4");
        BigInteger hundred = new BigInteger("100");
        if ((year.remainder(fourhundred)).equals(BigInteger.ZERO)) {
            return true;
        }
        return ((year.remainder(four)).equals(BigInteger.ZERO)) && !((year.remainder(hundred)).equals(BigInteger.ZERO));
    }

    public static boolean isHuluculu(BigInteger year) {
        BigInteger fifteen = new BigInteger("15");
        return year.remainder(fifteen).equals(BigInteger.ZERO);
    }

    public static boolean isBulukulu(BigInteger year) {
        BigInteger fiftyfive = new BigInteger("55");
        if (isLeap(year)) {
            return year.remainder(fiftyfive).equals(BigInteger.ZERO);
        }
        return false;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        int t = 0;
        boolean first = true;
        try {
            while ((str = br.readLine()) != null) {
                BigInteger year = new BigInteger(str);
                boolean ordinary = true;
//                if (t++ > 0) {
//                    System.out.println();
//                }
                if(!first){
                    System.out.println();
                }
                first = false;
                if (isLeap(year)) {
                    System.out.println("This is leap year.");
                    ordinary = false;
                }
                if (isHuluculu(year)) {
                    System.out.println("This is huluculu festival year.");
                    ordinary = false;
                }
                if (isBulukulu(year)) {
                    System.out.println("This is bulukulu festival year.");
                    ordinary = false;
                }
                if (ordinary) {
                    System.out.println("This is an ordinary year.");
                }
//                System.out.println("");
            }
        } catch (Exception e) {

        }
        br.close();
    }
}
