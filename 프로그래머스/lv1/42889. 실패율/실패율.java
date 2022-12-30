class Solution {
    public int[] solution(int N, int[] stages) {
        int[] answer = new int[N];
        
        int users = stages.length;  //유저들 수
        
        int failer[] = new int[N];     //각 스테이지마다 남겨진 유저 수 == 실패자 수를 담을 배열
        
        for(int stage: stages) {
            if(stage == N + 1)  //N + 1은 == 마지막까지 클리어 한사람
                continue;
            failer[stage - 1]++;   //실패자 수를 증가시킴
        }
        
        double fail[] = new double[N];   //실패율을 담을 배열
        
        for(int i = 0; i < fail.length; i++) {
            if(users == 0)  //도달한 사람이 0이면 바로 탈출
                break;
            fail[i] = (double)failer[i] / users;    //실패율 == 실패자 / 도달한 사람
            users -= failer[i]; //다음 반복으로 갈때 현재 스테이지의 실패자를 빼야지 도달한 사람이 나옴
        }
        
        for(int i = 0; i < fail.length; i++) {
            double max = -1;    //제일 높은 실패율을 찾을 변수
            int idx = 0;        //찾은 실패율의 스테이지를 담을 변수
            for(int j = 0; j < fail.length; j++) {
                if(fail[j] > max) {     //실패율이 max보다 크면
                    max = fail[j];       //max에 실패율을 담음
                    idx = j;            //그 스테이지의 index를 담음
                }
            }
            answer[i] = idx + 1;    //i = 0부터 시작했기 때문에 1 증가시킴
            fail[idx] = -2;         //실패율 높은 거를 찾았으니 다음 반복때는 안 걸리게 하기 위해 -2를 넣음
        }
        
        return answer;
    }
}