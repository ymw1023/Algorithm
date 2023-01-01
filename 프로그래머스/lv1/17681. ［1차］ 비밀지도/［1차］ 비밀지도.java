class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[arr1.length];
        
        for(int i = 0; i < arr1.length; i++) {
            int brr[] = new int[n];
            
            int arr = arr1[i] | arr2[i];
            
            int j = n - 1;
            while(arr > 1) {
                brr[j] = arr % 2;
                arr /= 2;
                j--;
            }
            brr[j] = 1;
            
            answer[i] = "";
            for(j = 0; j < n; j++) {
                if(brr[j] == 1) {
                    answer[i] += '#';
                } else {
                    answer[i] += ' ';
                }
            }
        }
        
        return answer;
    }
}