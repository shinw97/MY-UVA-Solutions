
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.StringTokenizer;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Tiffany
 */
public class uva11849 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String str;
        while (!(str = br.readLine()).equals("0 0")) {
            st = new StringTokenizer(str);
            int n1 = Integer.parseInt(st.nextToken());
            int n2 = Integer.parseInt(st.nextToken());
            HashSet<String> hs = new HashSet();
            for (int i = 0; i < n1; i++) {
                hs.add(br.readLine());
            }
            int counter = 0;
            for (int i = 0; i < n2; i++) {
                if (hs.contains(br.readLine())) {
                    counter++;
//                    al.remove(al.indexOf(str));
                }
            }
            System.out.println(counter);
        }
    }
}
