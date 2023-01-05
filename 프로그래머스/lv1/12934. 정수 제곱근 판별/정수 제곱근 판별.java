import java.util.*;

class Solution {
    public long solution(long n) {
        long answer = 0;
        
        double ar = Math.sqrt(n);
        if(ar == Math.floor(ar)) {
            answer = (long)Math.pow(ar + 1, 2);
        } else {
            answer = -1;
        }
        
        return answer;
    }
}