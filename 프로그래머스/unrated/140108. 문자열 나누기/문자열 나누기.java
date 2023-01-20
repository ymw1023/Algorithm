class Solution {
    public int solution(String s) {
        int answer = 1;

        boolean ck = true;
        int count = 0;
        char cnt = ' ';

        for(int i = 0; i < s.length(); i++) {
            if(ck) {
                cnt = s.charAt(i);
                count = 1;
                ck = false;
                continue;
            }
            if(cnt == s.charAt(i)) {
                count++;
            }
            if(cnt != s.charAt(i)) {
                count--;
            }
            if(count == 0) {
                ck = true;
                answer++;
            }
        }

        if(ck) {
            answer--;
        }

        return answer;
    }
}