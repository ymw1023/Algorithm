class Solution {
    public String solution(String s, int n) {
        String answer = "";
        
        for(int i = 0; i < s.length(); i++) {
            char cnt = s.charAt(i);     //문자를 하나씩 꺼냄
            if(cnt == ' ') {    //공백일 경우 그냥 추가하고 다음 반복으로
                answer += cnt;
                continue;
            }
            int ck = 0;     //대문자 판별
            if(97 <= cnt && cnt<= 122) {    //isUpperCase()로 가능
                ck = 1;     //대문자이면 1
            }
            cnt = (char)(cnt + n);  //알파벳 바꿈
            if(cnt > 122 || (90 < cnt && ck == 0)) {    //대/소문자를 판별한 이유! - 대문자 + 26을 할경우 소문자 범위로 들어가기 때문
                cnt = (char)(cnt - 26); //z를 벗어나면 26 빼줌
            }
            answer += cnt;
        }
        
        return answer;
    }
}