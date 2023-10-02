#include <stdio.h>

int main()
{
    int X, N, a, b;
    
    scanf("%d", &X);
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        
        X = X - a * b;
    }
    
    printf("%s", X ? "No" : "Yes");
    
    return 0;
}
