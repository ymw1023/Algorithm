class Solution {
    public int solution(int[] nums) {
        int arr[] = new int[nums.length];
        
        int type = 0;
        
        outer: for (int num: nums) {
            for(int i = 0; i < type; i++) {
                if(arr[i] == num) {
                    continue outer;
                }
            }
            arr[type] = num;
            type++;
        }
        
        int answer = type > nums.length / 2 ? nums.length / 2 : type;
        
        return answer;
    }
}