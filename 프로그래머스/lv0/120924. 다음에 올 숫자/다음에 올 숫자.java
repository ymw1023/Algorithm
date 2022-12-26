import java.util.Arrays;

class Solution {
    public int solution(int[] common) {
        int answer;
        if (common[common.length - 1] - common[common.length - 2] == common[common.length - 2] - common[common.length - 3]) {
            answer = common[common.length - 1] * 2 - common[common.length - 2];
        } else {
            answer = common[common.length - 1] / common[common.length - 2] * common[common.length - 1];
        }
        return answer;
    }
}