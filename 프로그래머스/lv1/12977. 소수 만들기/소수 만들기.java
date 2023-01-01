class Solution {
    public int solution(int[] nums) {
        int answer = 0; //배열 3001칸이라 메모리 공간 많이 먹을 것 같지만 boolean값이라 생각보다 적음
        boolean arr[] = new boolean[3001];
                    //미리 소수를 판별 해놓으면 좋은점
                    //나중에 3개의 숫자를 더할때 3중 반복을 쓸텐데, 거기에 소수까지 판별하는 반복을 넣으면 오래걸림
                    //3001인 이유는 3개의 숫자의 합 최대값이 3000이기 때문에 arr[3000]을 쓰기 위해서다 - 정확히는 중복이 안되므로 2997...
        arr[1] = true;  //1은 소수가 아님
        for(int i = 2; i < 55; i++) {
            if(arr[i])  //만약 i가 4라면 i가 2 일때 이미 다 체크를 해놧으므로 패스 - 시간을 최대한 줄이기 위해
                continue;
            for(int j = i * i; j <= 3000; j = j + i) {  //i의 제곱부터 시작하는 이유는 예를 들어 3 * 2 같은 거는 i가 2일때 체크를 했기때문
                arr[j] = true;  //소수인것을 체크
            }
        }
        
        for (int i = 0; i < nums.length - 2; i++) {
            for(int j = i + 1; j < nums.length - 1; j++) {
                for(int k = j + 1; k < nums.length; k++) {
                    if(!arr[nums[i] + nums[j] + nums[k]]) {
                        answer++;
                    }
                }
            }
        }
        

        return answer;
    }
}