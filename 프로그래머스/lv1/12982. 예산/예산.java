import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        int arr[] = d;
        int cnt = budget;
        
        Arrays.sort(arr);
        
        for(int i = 0; i < d.length; i++) {
            budget -= d[i];
            if(budget < 0) {
                break;
            }
            answer++;
        }
        
        return answer;
    }
}