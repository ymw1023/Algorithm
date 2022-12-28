class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = new int[2];
        
        int count = 0;
        int ck = 0;
        for(int lotto: lottos) {
            if(lotto == 0) {
                ck++;
                continue;
            }
            for(int win_num: win_nums) {
                if(lotto == win_num) {
                    count++;
                    break;
                }
            }
        }
        
        answer[0] = 7 - count - ck > 6 ? 6 : 7 - count - ck;
        answer[1] = 7 - count > 6 ? 6 : 7 - count;
        
        return answer;
    }
}