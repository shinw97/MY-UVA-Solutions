
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
public class uva10127 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        StringBuilder s = new StringBuilder();
        while ((str = br.readLine()) != null) {
            if(str.isEmpty()){
                break;
            }
            int n = Integer.parseInt(str);
            if(n == 1){
                s.append(1).append('\n');
                continue;
            }
            int ones = 11, counter = 2;
            while (ones % n != 0) {
                ones = (ones % n) * 10 + 1;
                counter++;
            }
            //System.out.println(counter);
            s.append(counter).append('\n');
            //str = br.readLine();
        }
        System.out.print(s.toString());
    }
}
