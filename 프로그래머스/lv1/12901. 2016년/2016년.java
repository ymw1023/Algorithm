class Solution {
    public String solution(int a, int b) {
        String answer = "";
        int month[] = new int[] {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int total = 4;
        
        for (int i = 0; i < a - 1; i++) {
            total += month[i];
        }
        
        total += b;
        
        total %= 7;
        
        switch (total) {
            case 0:
                answer = "SUN";
                break;
            case 1:
                answer = "MON";
                break;
            case 2:
                answer = "TUE";
                break;
            case 3:
                answer = "WED";
                break;
            case 4:
                answer = "THU";
                break;
            case 5:
                answer = "FRI";
                break;
            case 6:
                answer = "SAT";
                break;
        }
        return answer;
    }
}