class Solution {
    public int[] solution(int[] arr) {
        int[] answer = arr.length > 1 ? new int[arr.length - 1]: new int[1];
        if(arr.length == 1) {
            answer[0] = -1;
            return answer;
        }
        
        int min = arr[0];
        for(int i = 1; i < arr.length; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        
        int cnt = 0;
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == min) {
                continue;
            }
            answer[cnt] = arr[i];
            cnt++;
        }
        
        return answer;
    }
}