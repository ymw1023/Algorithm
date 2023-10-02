#include <stdio.h>

int main()
{
    int score;
    
    scanf("%d", &score);
    
    if(score == 100) {  //백점일때 A 출력
        printf("A");
        return 0;
    }
    
    if(score < 60) {    //60미만일때 F 출력
        printf("F");
        return 0;
    }
    
    printf("%c", 74 - score / 10);  // 99 ~ 60일때 계산후 등급 출력
    return 0;
}
