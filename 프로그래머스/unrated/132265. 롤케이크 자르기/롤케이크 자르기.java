import java.util.HashMap;

class Solution {
    public int solution(int[] topping) {
        int answer = 0;

        HashMap<Integer, Integer> map1 = new HashMap<>();

        for(int number: topping) {
            if(map1.containsKey(number)) {
                map1.put(number, map1.get(number) + 1);
                continue;
            }
            map1.put(number, 1);
        }

        HashMap<Integer, Integer> map2 = new HashMap<>();

        for(int number: topping) {
            map2.put(number, 1);
            map1.put(number, map1.get(number) - 1);
            if(map1.get(number) == 0) {
                map1.remove(number);
            }

            if(map1.size() == map2.size()) {
                answer++;
            }

            if(map2.size() > map1.size()) {
                break;
            }
        }

        return answer;
    }
}