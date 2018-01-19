
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
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
public class uva119 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String str;
        boolean isFirst = true;
        while ((str = br.readLine()) != null) {
            if (str.isEmpty()) {
                break;
            }
            int ppl = Integer.parseInt(str);
            str = br.readLine();
            st = new StringTokenizer(str);
            HashMap<String, Integer> hm = new HashMap();
            String[] arr = new String[ppl];
            int count = 0;
            while (st.hasMoreTokens()) {
                arr[count] = st.nextToken();
                hm.put(arr[count], 0);
                count++;
            }
            for (int i = 0; i < ppl; i++) {
                str = br.readLine();
                st = new StringTokenizer(str);
                String name = st.nextToken();
                int total = Integer.parseInt(st.nextToken());
                int divide = Integer.parseInt(st.nextToken());
                if (divide > 0) {
                    hm.replace(name, hm.get(name) - ((total / divide) * divide));
                    for (int j = 0; j < divide; j++) {
                        name = st.nextToken();
                        hm.replace(name, hm.get(name) + (total / divide));
                    }
                }
            }
            if (!isFirst) {
                System.out.println("");
            }

            isFirst = false;
            for (int i = 0; i < ppl; i++) {
                System.out.println(arr[i] + " " + hm.get(arr[i]));
            }
        }
    }
}
