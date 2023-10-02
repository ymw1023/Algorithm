#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char S[1000];
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        scanf("%s", S);
        printf("%c%c\n", S[0], S[strlen(S)-1]);
    }
    
    return 0;
}
