import java.util.*;

class Solution {
    public int[] solution(long n) {
        long cnt = n;
        
        int arr[] = new int[12];
        int cnt2 = 0;   //배열의 크기를 정할 변수
        
        while(cnt > 0) {
            arr[cnt2] = (int)(cnt % 10);
            cnt /= 10;
            cnt2++;
        }
        
        int answer[] = new int[cnt2];   //크기로 배열만듬
        
        for (int i = 0; i < cnt2; i++) {
            answer[i] = arr[i];
        }
        
        return answer;
    }
}