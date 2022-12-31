import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        
        List<String> arr = new ArrayList<String>();
        List<String> brr = new ArrayList<String>();
        
        for(String participants : participant) {        //participant배열을 리스트에 복사
            arr.add(participants);
        }
        for(String completions : completion) {          //completion배열을 리스트에 복사
            brr.add(completions);
        }
        
        Collections.sort(arr);          //오름차순 정렬
        Collections.sort(brr);
        
        int cnt = 0;
        for(int i = 0; i < brr.size(); i++) {
            if(!arr.get(i).equals(brr.get(i))) {    //arr[i]와 brr[i]를 동시에 비교 - 정렬을 햇기때문!
                answer = arr.get(i);                //값이 달라지면 그 값이 우리의 목표이다!
                cnt = 1;
                break;
            }
        }
        
        //cnt를 쓰는 이유는 완주를 못한 사람의 이름이 사전적으로 엄청 뒤에 나올경우
        //위의 for 문에서 if 조건에는 안 들어갔지만 완주자 명단에는 없기때문에
        //cnt라는 변수를 이용해서
        
        if(cnt == 0) {
            answer = arr.get(arr.size() - 1);
        }
        
        
        return answer;
    }
}