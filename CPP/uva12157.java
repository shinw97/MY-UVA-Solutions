
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author LSW
 */
class uva12157 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testcase; i++) {
            StringTokenizer st;
            int plans = Integer.parseInt(br.readLine());
            String str = br.readLine();
            st = new StringTokenizer(str);
            int priceM = 0, priceJ = 0;
            while (st.hasMoreTokens()) {
                int temp = Integer.parseInt(st.nextToken());
                int timesM = temp / 30 + 1;
//                if (temp % 30 != 0) {
//                    timesM++;
//                }
                int timesJ = temp / 60 + 1;
//                if (temp % 60 != 0) {
//                    timesJ++;
//                }
                priceM = priceM + timesM * 10;
                priceJ = priceJ + timesJ * 15;
//                System.out.println(priceM + " " + priceJ);
            }
//            System.out.println("final- " + priceM + " " + priceJ);
            if (priceM > priceJ) {
                System.out.println("Case " + (i + 1) + ": Juice " + priceJ);
            } else if (priceJ > priceM) {
                System.out.println("Case " + (i + 1) + ": Mile " + priceM);
            } else {
                System.out.println("Case " + (i + 1) + ": Mile Juice " + priceM);
            }
        }
    }
}
