#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// section_len은 배열 section의 길이입니다.
int solution(int n, int m, int section[], size_t section_len) {
    int answer = 0;
    int temp = 0;
    
    for (int i = 0; i < section_len - 1; i++) {
        
        // temp가 존재할 경우 temp랑 seciton[i + 1] 비교
       if (temp) {
           if (section[i + 1] - temp <= m - 1) {
               continue;
           }
           
           temp = 0;
           answer++;
           continue;
       }
        
        // temp가 없을 경우 section[i]과 seciton[i + 1] 비교
        if (section[i + 1] - section[i] <= m - 1) {
            temp = section[i];
            continue;
        }
        
        answer++;
    }
    
    // 마지막 횟수 추가
    answer++;
    
    return answer;
}