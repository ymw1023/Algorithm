class Solution {
    public int solution(int M, int N) {
        int answer = 0;
        if (M > N) {
            answer = ( M - 1 ) * N + N - 1;
        } else {
            answer =( N - 1 ) * M + M - 1;
        }
        return answer;
    }
}