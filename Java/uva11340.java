
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Tiffany
 */
public class uva11340 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testcase; i++) {
            int keys = Integer.parseInt(br.readLine());
            HashMap<Character, Integer> hm = new HashMap();
            for (int j = 0; j < keys; j++) {
                hm.put((char) br.read(), Integer.parseInt(br.readLine().trim()));
            }
            int lines = Integer.parseInt(br.readLine());
            double sum = 0;
            for (int j = 0; j < lines; j++) {
                String str = br.readLine();
                for (int k = 0; k < str.length(); k++) {
                    if (hm.containsKey(str.charAt(k))) {
                        sum += (double) hm.get(str.charAt(k));
                    }
                }
            }
            sum /= 100;
            System.out.printf("%.2f$\n", sum);
        }
    }
}
