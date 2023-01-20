import java.util.*;

class Solution {
    public int[] solution(String today, String[] terms, String[] privacies) {
        List<Integer> answer = new ArrayList<>();

        int year = Integer.parseInt(today.split("\\.")[0]);
        int month = Integer.parseInt(today.split("\\.")[1]);
        int day = Integer.parseInt(today.split("\\.")[2]);

        Map<String, Integer> validity = new HashMap<>();
        for(String term: terms) {
            validity.put(term.split(" ")[0], Integer.parseInt(term.split(" ")[1]));
        }

        for(int i = 0; i < privacies.length; i++) {
            String privacy = privacies[i];
            String check = privacy.split(" ")[1];
            int ckyear = Integer.parseInt(privacy.split(" ")[0].split("\\.")[0]);
            int ckmonth = Integer.parseInt(privacy.split(" ")[0].split("\\.")[1]) + validity.get(check);
            int ckday = Integer.parseInt(privacy.split(" ")[0].split("\\.")[2]) - 1;

            if(ckmonth > 12) {
                ckyear = ckyear + ckmonth / 12;
                ckmonth %= 12;
                if(ckmonth == 0) {
                    ckyear--;
                    ckmonth = 12;
                }
            }

            if(year > ckyear) {
                answer.add(i);
                continue;
            }
            if(year == ckyear && month > ckmonth) {
                answer.add(i);
                continue;
            }
            if(year == ckyear && month == ckmonth && day > ckday) {
                answer.add(i);
            }
        }

        int[] result = new int[answer.size()];

        for(int i = 0; i < result.length; i++) {
            result[i] = answer.get(i) + 1;
        }

        return result;
    }
}