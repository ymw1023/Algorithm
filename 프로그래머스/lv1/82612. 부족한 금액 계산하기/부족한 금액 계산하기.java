class Solution {
    public long solution(int price, int money, int count) {
        long answer = (long)(count + 1) * count / 2 * price - money;

        return answer <= 0 ? 0 : answer;
    }
}