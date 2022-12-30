import java.util.*;

class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        ArrayList<Integer> arr = new ArrayList<Integer>();      //바구니
        
        outer: for(int move: moves) {
            for(int i = 0; i < board.length; i++) {
                if(board[i][move - 1] == 0) {       //집게를 내리는 과정
                    continue;
                } else {                        //무언가를 집음
                    arr.add(board[i][move - 1]);     //바구니에 추가
                    board[i][move - 1] = 0;         //board에서 인형제거
                    if(arr.size() != 1) {       //바구니에서 비교
                        if(arr.get(arr.size() - 1) == arr.get(arr.size() - 2)) {//바구니의 인형 연속인지 비교
                            arr.remove(arr.size() - 1);         //바구니의 끝값 두개 제거
                            arr.remove(arr.size() - 1);
                            answer += 2;
                        }
                    }
                    continue outer;
                }
            }
        }
        
        return answer;
    }
}