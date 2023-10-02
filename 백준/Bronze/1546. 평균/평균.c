#include <stdio.h>

int main()
{
    int N, num = 0, max = 0;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int cnt;
        
        scanf("%d", &cnt);
        
        if(cnt > max) {
            max = cnt;
        }
        
        num += cnt;
    }
    
    printf("%lf", ((double)num / N) * 100 / max);
    
    return 0;
}
