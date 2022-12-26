import java.util.Arrays;

class Solution {
    public int solution(int[][] sizes) {
        int wid = 0;
        int hei = 0;    //wid가 hei보다 더 긴 지갑을 만듬 - hei가 더 커도 상관은 없음
        
        for(int[] size: sizes) {    //size에서 길이를 hmax와 wmax로 구분한 이유는
                                    //wid가 긴 지갑을 생각했을 때 가로와 세로가 더 긴 쪽이 wid로 가야되고
                                    //더 짧은 족이 height로 감
                                    //따라서 지갑의 가로는 명함들의 더 긴쪽의 길이를 비교해야되고
                                    //지갑의 세로는 짧은 쪽의 길이를 비교해야됨
            int hmax = size[0] > size[1] ? size[1]: size[0];
            int wmax = size[0] <= size[1] ? size[1]: size[0];
            
            if(wmax > wid) {    //가로 - 긴 것들 중의 최대 값을 찾음
                wid = wmax;
            }
            if(hmax > hei) {    //세로 - 짧은 것들 중의 최대 값을 찾음
                hei = hmax;
            }
        }
        
        int answer = wid * hei;
        return answer;
    }
}