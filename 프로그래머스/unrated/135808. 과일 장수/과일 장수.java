import java.util.Arrays;

class Solution {
    public int solution(int k, int m, int[] score) {
        int[] arr = score;
        int answer = 0;
        int cnt = 0;
        
        Arrays.sort(arr);
        
        for(int i = arr.length - 1; i >= 0; i--) {
            cnt++;
            if(cnt == m) {
                cnt = 0;
                answer = answer + m * arr[i];
            }
        }
        
        
        return answer;
    }
}