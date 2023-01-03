class Solution {
    public String solution(int num) {
        num=num<0?-num:num;
        String answer = num%2==1?"Odd":"Even";
        return answer;
    }
}