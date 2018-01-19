
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
public class uva11152 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String str;
        while ((str = br.readLine()) != null) {
            if (str.isEmpty()) {
                break;
            }
            st = new StringTokenizer(str);
            double a = Double.parseDouble(st.nextToken());
            double b = Double.parseDouble(st.nextToken());
            double c = Double.parseDouble(st.nextToken());
            double k = (a + b + c) / 2;
            double radius1 = a * b * c / Math.sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
            double circle1 = radius1 * radius1 * Math.PI;
            double triangle = Math.sqrt(k * (k - a) * (k - b) * (k - c));
            circle1 -= triangle;
            double radius2 = triangle / k;
            double circle2 = radius2 * radius2 * Math.PI;
            triangle -= circle2;
            System.out.printf("%.4f %.4f %.4f\n", circle1, triangle, circle2);
        }
    }
}
