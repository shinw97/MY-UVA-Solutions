
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.TreeMap;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author LSW
 */
public class uva755 {

    public static void main(String[] args) throws IOException {
        String c = "ABCDEFGHIJKLMNOPRSTUVWXY";
        String value = "222333444555666777888999";
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        boolean isFirst = true;
        for (int i = 0; i < testcase; i++) {
            br.readLine();
            if (!isFirst) {
                System.out.println("");
            }
            isFirst = false;
            int numbers = Integer.parseInt(br.readLine().trim());
            String[] arr = new String[numbers];
            for (int j = 0; j < numbers; j++) {
                arr[j] = br.readLine();
            }
            boolean repeated = false;
            TreeMap<String, Integer> tm = new TreeMap();
            for (String str : arr) {
                String temp = "";
                for (int j = 0; j < str.length(); j++) {
                    if (Character.isDigit(str.charAt(j))) {
                        temp = temp + str.charAt(j);
                    } else if (Character.isAlphabetic(str.charAt(j))) {
                        temp = temp + value.charAt(c.indexOf(str.charAt(j)));
                    }
                }
                if (tm.containsKey(temp)) {
                    tm.replace(temp, tm.get(temp) + 1);
                    repeated = true;
                } else {
                    tm.put(temp, 1);
                }
            }
            if (repeated) {
                tm.keySet().stream().filter((key) -> (tm.get(key) > 1)).map((key) -> {
                    for (int j = 0; j < key.length(); j++) {
                        System.out.print(key.charAt(j));
                        if (j == 2) {
                            System.out.print("-");
                        }
                    }
                    return key;
                }).forEach((key) -> {
                    System.out.println(" " + tm.get(key));
                });
            }else{
                System.out.println("No duplicates.");
            }
        }
    }
}
