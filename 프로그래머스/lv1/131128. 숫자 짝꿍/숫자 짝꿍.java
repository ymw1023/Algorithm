class Solution {
    public String solution(String X, String Y) {
        String answer = "";

        int[] xArr = new int[10];
        int[] yArr = new int[10];

        for(String num: X.split("")) {
            xArr[Integer.parseInt(num)]++;
        }
        for(String num: Y.split("")) {
            yArr[Integer.parseInt(num)]++;
        }
        for(int i = 9; i >= 0; i--) {
            int min = Math.min(xArr[i], yArr[i]);
            answer = answer + (Integer.toString(i)).repeat(min);
        }
        if(answer.equals("")) {
            return "-1";
        }
        if("".equals(answer.replace("0", ""))) {
            return "0";
        }
        return answer;
    }
}