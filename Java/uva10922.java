
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author LSW
 */
class uva10922 {

    public static int compute(String str, int depth) {
        if(str.length() == 1){
            if(str.equals("9")){
                return depth;
            }else{
                return -1;
            }
        }else{
            int sum = 0;
            for (int i = 0; i < str.length(); i++) {
                sum += Character.getNumericValue(str.charAt(i));
            }
            return compute(Integer.toString(sum), depth + 1);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String x;
        while (!(x = br.readLine()).equals("0")) {
            int sum = 0;
            for (int i = 0; i < x.length(); i++) {
                sum += Character.getNumericValue(x.charAt(i));
            }
            String str = Integer.toString(sum);
            int ans = compute(str, 1);
            if (ans == -1) {
                System.out.println(x + " is not a multiple of 9.");
            } else {
                System.out.println(x + " is a multiple of 9 and has 9-degree "+ ans + ".");
            }
        }
    }
}
