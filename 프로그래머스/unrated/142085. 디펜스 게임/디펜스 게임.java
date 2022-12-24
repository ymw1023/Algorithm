import java.util.PriorityQueue;

class Solution {
    public int solution(int n, int k, int[] enemy) {
        if(k >= enemy.length) {
            return enemy.length;
        }

        PriorityQueue<Integer> enemys = new PriorityQueue<>();

        for(int i = 0; i < k; i++) {
            enemys.add(enemy[i]);
        }
        int total = 0;
        int i;
        for(i = k; i < enemy.length; i++) {
            if (enemys.peek() < enemy[i]) {
                total += enemys.poll();
                enemys.add(enemy[i]);
            } else {
                total += enemy[i];
            }
            if(total > n) {
                break;
            }
        }


        return i;
    }
}