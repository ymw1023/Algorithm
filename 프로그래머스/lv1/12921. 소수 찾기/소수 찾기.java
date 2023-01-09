class Solution {
    public int solution(int n) {
        int answer = n;
        boolean[] arr = new boolean[n + 1]; //boolean을 쓴이유는 바이트 줄이기위해
        arr[1] = true;  //1은 소수가 아님
        for(int i = 2; i * i<= n; i++) {   //j를 쓸때 i * i 부터 시작하기 때문
            if(arr[i]){ //시간을 줄이기 위해서 
                continue;   //ex 4를 넘김 바로 5
            }
            for(int j = i * i; j <= n; j += i) {//    16  20 24     2
                arr[j] = true;  //소수 체크
            }
        }
        for(int i = 1; i <= n; i++) {
            if(arr[i]) {
                answer--;
            }
        }
        return answer;
    }
}