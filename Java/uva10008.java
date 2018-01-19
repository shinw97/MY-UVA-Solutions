
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
public class uva10008 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int lines = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < lines; i++) {
            sb.append(br.readLine().trim().toUpperCase());
        }
        int[] alpha = new int[26];
        for (int i = 0; i < sb.length(); i++) {
            if (Character.isAlphabetic(sb.charAt(i))) {
                alpha[sb.charAt(i) - 65]++;
            }
        }
        int max = -1;
        for (int i = 0; i < alpha.length; i++) {
            if (alpha[i] > max) {
                max = alpha[i];
            }
        }
        for (int i = max; i > 0; i--) {
            for (int j = 0; j < 26; j++) {
                if (i == alpha[j]) {
                    System.out.println((char) (j + 65) + " " + i);
                }
            }
        }
    }
}
