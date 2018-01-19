
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
 * @author Tiffany
 */
class uva10189 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String str;
        int testcase = 1;
        boolean line = false;
        while ((str = br.readLine()) != null) {
            if (str.equals("0 0")) {
                break;
            }
            if (line) {
                System.out.println("");
            }
            line = true;
            st = new StringTokenizer(str);
            int i = Integer.parseInt(st.nextToken());
            int j = Integer.parseInt(st.nextToken());
            char[][] arr = new char[i][j];
            for (int k = 0; k < i; k++) {
                str = br.readLine();
                for (int l = 0; l < j; l++) {
                    arr[k][l] = str.charAt(l);
                }
            }

            for (int k = 0; k < i; k++) {
                for (int l = 0; l < j; l++) {
                    if (arr[k][l] == '.') {
                        int bombCount = 0;
                        try {
                            if (arr[k - 1][l - 1] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k - 1][l] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k - 1][l + 1] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k][l - 1] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k][l + 1] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k + 1][l - 1] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k + 1][l] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        try {
                            if (arr[k + 1][l + 1] == '*') {
                                bombCount++;
                            }
                        } catch (Exception e) {

                        }
                        arr[k][l] = Integer.toString(bombCount).charAt(0);
                    }
                }
            }

            System.out.println("Field #" + testcase + ":");
            for (int k = 0; k < i; k++) {
                for (int l = 0; l < j; l++) {
                    System.out.print(arr[k][l]);
                }
                System.out.println("");
            }
        }
    }
}
