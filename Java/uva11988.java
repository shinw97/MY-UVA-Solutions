
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author LSW
 */
public class uva11988 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        while ((str = br.readLine()) != null) {
            if (str.isEmpty()) {
                break;
            }
            LinkedList<Character> ll = new LinkedList();
            int pointer = 0;
            for (char c : str.toCharArray()) {
                switch (c) {
                    case '[':
                        pointer = 0;
                        break;
                    case ']':
                        pointer = ll.size();
                        break;
                    default:
                        ll.add(pointer++, c);
                        break;
                }
            }
            StringBuilder sb = new StringBuilder();
            ll.stream().forEach((c) -> {
                sb.append(c);
            });
            System.out.println(sb.toString());
        }
    }
}
