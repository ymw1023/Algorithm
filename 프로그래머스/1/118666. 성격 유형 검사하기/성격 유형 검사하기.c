#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 5);
    
    // [0] = R/T, [1] = C/F, [2] = J/M, [3] = A/N
    int array[4] = { 0, };
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    for (int i = 0; i < survey_len; i++) {
        if (choices[i] == 4) {
            continue;
        }
        
        // choices[i]가 4보다 작으면 앞의 문자를 증가, 4보다 크면 뒤의 문자를 증가
        int check = 1;
        
        int index;
        
        switch (survey[i][0]) {
            case 'R':
                check = 0;
            case 'T':
                index = 0;
                break;
                
            case 'C':
                check = 0;
            case 'F':
                index = 1;
                break;
                
            case 'J':
                check = 0;
            case 'M':
                index = 2;
                break;
                
            case 'A':
                check = 0;
            case 'N':
                index = 3;
        }
        
        //ex)
        //RT 7 = -3     index = 0
        //RT 3 = +1
        //TR 7 = +3
        //TR 3 = -1
        
        if (check) {
            array[index] = array[index] + (choices[i] - 4);
        }
        else {
            array[index] = array[index] - (choices[i] - 4);
        }

        for (int i = 0; i < 4; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    
    answer[0] = array[0] >= 0 ? 'R' : 'T';
    answer[1] = array[1] >= 0 ? 'C' : 'F';
    answer[2] = array[2] >= 0 ? 'J' : 'M';
    answer[3] = array[3] >= 0 ? 'A' : 'N';
    
    answer[4] = '\0';
    
    return answer;
}