class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        int max = n > m ? n : m;
        int min = n <= m ? n : m;
        
        if(max % min == 0) {
            answer[0] = min;
            answer[1] = max;
            return answer;
        }
        
        for(int i = min / 2 ; i > 0; i--) {
            if(max % i == 0 && min % i == 0) {
                answer[0] = i;
                break;
            }
        }
        
        int sum = max;
        while(true) {
            if(sum % min == 0) {
                answer[1] = sum;
                break;
            }
            sum += max;
        }
        
        
        return answer;
    }
}