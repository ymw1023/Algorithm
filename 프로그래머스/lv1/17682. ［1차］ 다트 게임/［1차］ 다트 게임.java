class Solution {
    public int solution(String dartResult) {
        int answer = 0;
        int cnt = 0;
        int i = 0;
        char cnt1;
        
        int cnt2 = 0;
        for(int k = 0; k < 3; k++) {    //그냥 3회 반복
            cnt2 = 0;
            cnt1 = dartResult.charAt(i);
            i++;
            if(cnt1 == '1') {       //문자가 '1'이면 숫자 1인지 10인지 체크
                if(dartResult.charAt(i) == '0') {   //다음문자가 '0'이면
                    cnt2 = 10;      //숫자 '10'이 되고 i를 1증가
                    i++;
                } else {        //10아니면 그냥 1 넣음
                    cnt2 = 1;
                }
            } else {        //'숫자'를 int형 숫자로 넣음
                cnt2 = (int)cnt1 - 48;
            }
            cnt1 = dartResult.charAt(i);    //보너스를 읽음
            i++;
            if(cnt1 == 'D') {       //'D'이면 제곱
                cnt2 = cnt2 * cnt2;
            } else if (cnt1 == 'T'){        //'T'이면 3제곱
                cnt2 = cnt2 * cnt2 * cnt2;
            }
            if(i < dartResult.length()) {  //if 문이 있는 이유는 스타상 등을 판별할때 문자열 범위 안넘기 위해
                cnt1 = dartResult.charAt(i);
                if(cnt1 == '*') {   //스타상이 잇으면
                    cnt *= 2;       //앞의 점수와 지금 점수를 곱하기 2
                    cnt2 *= 2;
                    i++;
                } else if(cnt1 == '#') {
                    cnt2 *= (-1);       //아차상이면 점수를 음수로 바꿈
                    i++;
                }
            }
            //System.out.println(cnt + "     " + cnt2);
            answer += cnt;
            cnt = cnt2;
        }
        
        answer += cnt2;
        
        return answer;
    }
}