
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
public class uva10106 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        while ((str = br.readLine()) != null) {
            if (str.isEmpty()) {
                break;
            }
            String n1 = str.trim();
            String n2 = br.readLine().trim();
            int vertical = n1.length() + n2.length();
            int horizontal = n2.length();
            int[][] multiply = new int[horizontal][vertical];
            int arri = 0, arrj;
            for (int j = n2.length() - 1; j >= 0; j--) {
                arrj = vertical - 1 - arri;
                int carry = 0;
                for (int i = n1.length() - 1; i >= 0; i--) {
                    multiply[arri][arrj] = Character.getNumericValue(n1.charAt(i)) * Character.getNumericValue(n2.charAt(j)) + carry;
                    //System.out.println(multiply[arri][arrj]);
                    carry = multiply[arri][arrj] / 10;
                    multiply[arri][arrj] %= 10;
                    arrj--;
                }
                multiply[arri][arrj] = carry;
                arri++;
            }
            //print array
//            for (int i = 0; i < horizontal; i++) {
//                for (int j = 0; j < vertical; j++) {
//                    System.out.print(multiply[i][j] + " ");
//                }
//                System.out.println("");
//            }
            String ans = "";
            int carry = 0;
            for (int j = vertical - 1; j >= 0; j--) {
                int sum = 0;
                for (int i = 0; i < horizontal; i++) {
                    sum += multiply[i][j];
                }
                sum += carry;
                carry = sum / 10;
                ans = (sum % 10) + "" + ans;
            }
            int index = 0;
            while(ans.charAt(index) == '0'){
                if(ans.length() == 1){
                    break;
                }
                ans = ans.substring(index + 1);
            }
            System.out.println(ans);
        }
    }
}
