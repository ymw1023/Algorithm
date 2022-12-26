class Solution {
    public int solution(int number, int limit, int power) {
        int answer = 0;
        int[] arr = new int[number+1];
        
        for(int i = 1; i <= number; i++) {
            for(int j = 1; i * j <= number; j++) {
                arr[i * j]++;
            }
        }
        
        for(int i = 1; i <= number; i++) {
            if(arr[i] > limit) {
                arr[i] = power;
            }
            answer += arr[i];
        }
        
        return answer;
    }
}