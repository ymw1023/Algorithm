#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    //3개가 같을 경우
    if(a == b && b == c) {
        printf("%d", 10000 + a * 1000);
        return 0;
    }
    
    //2개가 같을 경우
    if(a == b) {
        printf("%d", 1000 + a * 100);
        return 0;
    }
    
    if(a == c) {
        printf("%d", 1000 + a * 100);
        return 0;
    }
    
    if(b == c) {
        printf("%d", 1000 + b * 100);
        return 0;
    }
    
    //3개 다 다를 경우
    if(a > c && a > b) {
        printf("%d", a * 100);
        return 0;
    }
    
    if(b > c) {
        printf("%d", b * 100);
        return 0;
    }
    
    printf("%d", c * 100);
    
    return 0;
}
