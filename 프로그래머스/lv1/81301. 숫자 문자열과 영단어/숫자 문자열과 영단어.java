class Solution {
    public int solution(String s) {
        String answer = "";
        String ck = "";
        for(int i = 0; i < s.length(); i++) {
            char cnt = s.charAt(i);
            if(48 <= cnt && cnt <= 57) {
                answer += cnt;
            } else if(97 <= cnt && cnt <= 122 && ck == "") {
                ck += cnt;
            } else {
                ck += cnt;
                switch (ck) {
                    case "on":
                        answer += '1';
                        i += 1;
                        break;
                    case "tw":
                        answer += '2';
                        i += 1;
                        break;
                    case "th":
                        answer += '3';
                        i += 3;
                        break;
                    case "fo":
                        answer += '4';
                        i += 2;
                        break;
                    case "fi":
                        answer += '5';
                        i += 2;
                        break;
                    case "si":
                        answer += '6';
                        i += 1;
                        break;
                    case "se":
                        answer += '7';
                        i += 3;
                        break;
                    case "ei":
                        answer += '8';
                        i += 3;
                        break;
                    case "ni":
                        answer += '9';
                        i += 2;
                        break;
                    case "ze":
                        answer += '0';
                        i += 2;
                        break;
                }
                ck = "";
            }
        }
        
        return Integer.parseInt(answer);
    }
}