class Solution {
    public int solution(int num) {
        int answer = 0;
        
        long cnt = num;
        
        while(true) {
            if(cnt == 1 || answer == 500) {
                break;
            }
            
            if(cnt % 2 == 0) {
                cnt /= 2;
            } else {
                cnt = cnt * 3 + 1;
            }
            answer++;
        }
        
        return answer == 500 ? -1 : answer;
    }
}