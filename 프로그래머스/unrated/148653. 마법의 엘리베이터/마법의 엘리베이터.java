class Solution {
    public int solution(int storey) {
        int answer = 0;

        while(storey >= 1) {
            int number = storey % 10;

            storey /= 10;

            if(number > 5 || (number == 5 && storey % 10 >= 5)) {
                storey++;
                number = 10 - number;
            }

            answer += number;
        }

        return answer;
    }
}