import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;

class Solution {
    public int solution(int k, int[] tangerine) {
        HashMap number = new HashMap<>();
        int count;
        for(int num: tangerine) {
            count = 0;
            if(number.containsKey(num)) {
                count = (int)number.get(num);
            }
            count++;
            number.put(num, count);
        }

        ArrayList<Integer> nums = new ArrayList<>();

        for(int num: new ArrayList<Integer>(number.values())) {
            nums.add(num);
        }

        nums.sort(Comparator.reverseOrder());
        count = 0;
        int i;
        for(i = 0; i < nums.size(); i++) {
            count += nums.get(i);
            if(count >= k) {
                break;
            }
        }
        return i + 1;
    }
}