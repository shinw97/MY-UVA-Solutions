
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author LSW
 */
class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testcase = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder(testcase);
        for (int i = 0; i < testcase; i++) {
            String str = br.readLine();
            if (str.isEmpty()) {
                sb.append("Yes\n");
                continue;
            }
            Stack<Character> st = new Stack();
//            boolean check = true;
            for (int j = 0; j < str.length(); j++) {

                if (str.charAt(j) == '(') {
                    st.push(str.charAt(j));
                    continue;
                }
                if (str.charAt(j) == '[') {
                    st.push(str.charAt(j));
                    continue;
                }
                if (str.charAt(j) == ')') {
                    if (st.isEmpty()) {
                        st.push(str.charAt(j));
                        break;
                    }
                    if (st.pop() != '(') {
                        st.push(str.charAt(j));
                        break;
                    }

                }
                if (str.charAt(j) == ']') {
                    if (st.isEmpty()) {
                        st.push(str.charAt(j));
                        break;
                    }
                    if (st.pop() != '[') {
                        st.push(str.charAt(j));
                        break;
                    }
                }
            }
            if (st.isEmpty()) {
                sb.append("Yes\n");
            } else {
                sb.append("No\n");
            }
        }
        System.out.print(sb.toString());
    }
}
