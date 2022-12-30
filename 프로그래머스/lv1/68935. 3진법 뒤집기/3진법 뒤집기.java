import java.util.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int cnt = n;
        while(cnt >= 3) {
            arr.add(cnt % 3);
            cnt /= 3;
        }
        arr.add(cnt);
        
        for(int i = 0; i < arr.size(); i++) {
            answer = answer * 3 + arr.get(i);
        }
        
        return answer;
    }
}