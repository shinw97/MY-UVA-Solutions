
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
 * @author Tiffany
 */
public class uva10019 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < testcase; i++) {
            String n = br.readLine();
            String b1 = Integer.toString(Integer.parseInt(n, 10), 2);
            String b2 = Integer.toString(Integer.parseInt(n, 16), 2);
            int c1 = 0, c2 = 0;
            for (int j = 0; j < b1.length(); j++) {
                if (b1.charAt(j) == '1') {
                    c1++;
                }
            }
            for (int j = 0; j < b2.length(); j++) {
                if (b2.charAt(j) == '1') {
                    c2++;
                }
            }
            sb.append(c1).append(" ").append(c2).append('\n');
        }
        System.out.print(sb.toString());
    }
}
