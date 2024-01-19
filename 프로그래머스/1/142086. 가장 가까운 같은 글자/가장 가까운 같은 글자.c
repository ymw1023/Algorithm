#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    int length = strlen(s);

    int* answer = (int*)malloc(sizeof(int) * length);

    int alphabet[26] = { 0, };
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }
    
    printf("\n\n");

    for (int i = 0; i < length; i++) {
        int temp = s[i];

        if (alphabet[temp - 97]) {
            answer[i] = i - alphabet[temp - 97] + 1;
        }
        else {
            answer[i] = -1;
        }

        alphabet[temp - 97] = i + 1;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    return answer;
}