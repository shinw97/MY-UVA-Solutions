
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Tiffany
 */
public class uva10815 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        HashSet<String> hs = new HashSet();
        while ((str = br.readLine()) != null) {
//            if (str.isEmpty()) {
//                break;
//            }
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < str.length(); i++) {
                if (Character.isAlphabetic(str.charAt(i))) {
                    sb.append(str.charAt(i));
                } else if (sb.length() != 0) {
                    hs.add(sb.toString().toLowerCase());
                    sb = new StringBuilder();
                }
            }
            if (sb.length() != 0) {
                hs.add(sb.toString().toLowerCase());
            }
        }
        List<String> v = new ArrayList(hs);
        Collections.sort(v);
        v.stream().forEach(System.out::println);
    }
}
