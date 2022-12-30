class Solution {
    public String solution(int[] numbers, String hand) {
        String answer = "";

        int leftx = 0;
        int lefty = 0;
        int rightx = 2;
        int righty = 0;

        for(int num: numbers) {
            int left = 0;
            int right = 0;
            switch (num) {
                case 1: case 4: case 7:
                    answer += 'L';
                    leftx = 0;
                    lefty = (12 - num) / 3;
                    break;
                case 3: case 6: case 9:
                    answer += 'R';
                    rightx = 2;
                    righty = (12 - num) / 3;
                    break;
                case 0:
                    num = 11;
                case 2: case 5: case 8:
                    left = 1 - leftx + Math.abs((11 - num) / 3 - lefty);
                    right = rightx - 1 + Math.abs((11 - num) / 3 - righty);
                    if(left < right) {
                        answer += 'L';
                        leftx = 1;
                        lefty = (11 - num) / 3;
                    } else if(left > right) {
                        answer += 'R';
                        rightx = 1;
                        righty = (11 - num) / 3;
                    } else {
                        if("left".equals(hand)) {
                            answer += 'L';
                            leftx = 1;
                            lefty = (11 - num) / 3;
                        } else {
                            answer += 'R';
                            rightx = 1;
                            righty = (11 - num) / 3;
                        }
                    }
            }
        }

        return answer;
    }
}