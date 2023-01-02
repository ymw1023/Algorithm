class Solution {
    public boolean solution(int x) {
        boolean answer = true;
        int cnt = x;
        int sum = 0;
        
        while(cnt > 0) {
            sum = sum + cnt % 10;
            cnt /= 10;
        }
        
        if(x % sum != 0) {
            answer = false;
        }
        
        return answer;
    }
}