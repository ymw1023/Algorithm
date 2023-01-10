class Solution {
    public String[] solution(String[] strings, int n) {
        String[] answer = strings;
        
        for(int i = 0; i < answer.length - 1; i++) {
            for(int j = 0; j < answer.length - i - 1; j++) {
                if(answer[j].charAt(n) > answer[j + 1].charAt(n)) {   //n번째 문자를 비교
                    String temp = answer[j];   //크면 바꿈
                    answer[j] = answer[j + 1];
                    answer[j + 1] = temp;
                } else if (answer[j + 1].charAt(n) == answer[j].charAt(n)) {
                    if(answer[j].compareTo(answer[j + 1]) > 0) { 
                        String temp = answer[j];
                        answer[j] = answer[j + 1];
                        answer[j + 1] = temp;
                    }
                }
            }
        }
        
        return answer;
    }
}