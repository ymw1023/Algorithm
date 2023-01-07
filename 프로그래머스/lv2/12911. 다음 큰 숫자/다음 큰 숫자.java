class Solution {
    public int solution(int n) {
        int answer = 0;
        
        String count = Integer.toBinaryString(n).replace("0", "");
        
        for(answer = n + 1; answer <= 2 * n ; answer++) {
            if (Integer.toBinaryString(answer).replace("0", "").equals(count)) {
                break;
            }
        }
        
        return answer;
    }
}