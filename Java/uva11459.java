
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
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
class uva11459 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testcase; i++) {
            String str = br.readLine();
            StringTokenizer st = new StringTokenizer(str);
            int players = Integer.parseInt(st.nextToken());
            int snakestair = Integer.parseInt(st.nextToken());
            int moves = Integer.parseInt(st.nextToken());
            ArrayList<Integer> player = new ArrayList();
            HashMap<Integer, Integer> stair = new HashMap();
            HashMap<Integer, Integer> snake = new HashMap();
            for (int j = 0; j < players; j++) {
                player.add(1);
            }
            for (int j = 0; j < snakestair; j++) {
                str = br.readLine();
                st = new StringTokenizer(str);
                int x = Integer.parseInt(st.nextToken());
                int y = Integer.parseInt(st.nextToken());
                if (x >= y) {
                    snake.put(x, y);
                } else {
                    stair.put(x, y);
                }
            }
            int turn = 0;
            boolean end = false;
            for (int j = 0; j < moves; j++) {
                int step = Integer.parseInt(br.readLine());
                if (!end) {
                    player.set(turn, player.get(turn) + step);
                    if (player.get(turn) >= 100) {
                        player.set(turn, 100);
                        end = true;
                    }
                    if (stair.containsKey(player.get(turn))) {
                        int temp = player.get(turn);
                        player.set(turn, stair.get(temp));
                        if (player.get(turn) >= 100) {
                            player.set(turn, 100);
                            end = true;
                        }
                    }
                    if (snake.containsKey(player.get(turn))) {
                        int temp = player.get(turn);
                        player.set(turn, snake.get(temp));
                    }
                }
                if (turn == players - 1) {
                    turn = 0;
                } else {
                    turn++;
                }
            }

            for (int j = 0; j < players; j++) {
                System.out.println("Position of player " + (j + 1) + " is " + player.get(j) + ".");
            }
        }
    }
}
