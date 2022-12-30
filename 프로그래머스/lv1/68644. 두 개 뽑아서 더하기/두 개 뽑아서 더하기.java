import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        HashSet<Integer> brr = new HashSet<Integer>();
        
        for(int i = 0; i < numbers.length - 1; i++) {
            for(int j = i + 1; j < numbers.length; j++) {
                brr.add(numbers[i] + numbers[j]);
            }
        }
        
        ArrayList<Integer> arr = new ArrayList<Integer>(brr);
        
        arr.sort(Comparator.naturalOrder());
        
        int answer[] = new int[arr.size()];
        for(int i = 0; i < arr.size(); i++) {
            answer[i] = arr.get(i);
        }
        
        return answer;
    }
}