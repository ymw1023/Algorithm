import java.util.*;

class Solution {
    public int solution(int[] array) {
        int answer = 0;

        Map<Integer, Integer> number = new HashMap<>();

        for(int num: array) {
            if(!number.containsKey(num)) {
                number.put(num, 1);
                continue;
            }
            number.put(num, number.get(num) + 1);
        }

        List<Integer> keyList = new ArrayList<>(number.keySet());

        int max = -1;

        for(int num: keyList) {
            if(number.get(num) > max) {
                max = number.get(num);
                answer = num;
            }
            else if(number.get(num) == max) {
                answer = -1;
            }
        }

        return answer;
    }
}