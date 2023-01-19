class Solution {
    public int solution(int[] array, int height) {
        int answer = 0;
        for(int length: array) {
            if(length > height) {
                answer++;
            }
        }
        return answer;
    }
}