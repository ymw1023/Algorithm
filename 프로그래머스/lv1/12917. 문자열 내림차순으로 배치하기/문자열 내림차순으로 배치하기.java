import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        ArrayList<Character> arr= new ArrayList<Character>();
        
        for(int i = 0; i < s.length(); i++) {
            arr.add(s.charAt(i));
        }
        
        Collections.sort(arr, Collections.reverseOrder());
        
        for(char ar: arr) {
            answer += ar;
        }
        
        return answer;
    }
}