import java.util.*;

class Solution {
    public long solution(long n) {
        long answer = 0;
        long cnt = n;
        ArrayList<Integer>arr = new ArrayList<Integer>();
        
        while(cnt > 0) {
            arr.add((int)(cnt % 10));
            cnt /= 10;
        }
        
        arr.sort(Comparator.reverseOrder());
        
        for(int i = 0; i < arr.size(); i++) {
            answer *= 10;
            answer += arr.get(i);
        }
        
        return answer;
    }
}