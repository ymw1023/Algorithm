#include <stdio.h>

int main()
{
    int H, M;
    
    scanf("%d %d", &H, &M);
    
    //M이 45보다 작을 경우 H를 1감소 하고 M는 60 증가
    if(M < 45) {
        H = H == 0 ? 23 : --H;  //H가 0 일 경우 23으로 바꾸기
        M += 60;
    }
    
    M -= 45;
    
    printf("%d %d", H, M);
    
    return 0;
}
