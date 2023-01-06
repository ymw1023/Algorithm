class Solution {
    public String solution(String s) {
        String arr = s.toLowerCase();
        String answer= "";
        int cnt = 0;
        
        for(int i = 0; i < arr.length(); i++) {
            if(arr.charAt(i) == ' ') {
                answer += (char)arr.charAt(i);
                cnt = -1;
            } else if (cnt % 2 == 0) {
                answer += (char)(arr.charAt(i) - 32);
            } else {
                answer += (char)arr.charAt(i);
            }
            cnt++;
        }
        
        return answer;
    }
}