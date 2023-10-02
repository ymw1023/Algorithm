#include <stdio.h>

int main()
{
    int num, count = 0;
    int N[42] = {0, };
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);
        
        num %= 42;
        
        count++;
        
        if(N[num]) {
            count--;
        }
        
        N[num] = 1;
    }
    
    printf("%d", count);
    
    return 0;
}
