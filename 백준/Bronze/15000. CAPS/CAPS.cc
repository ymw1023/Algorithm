#include <stdio.h>

int main()
{
    int i=0;
    char arr[1000001];
    
    scanf("%s",arr);
    
    while(arr[i]!='\0')
    {
        arr[i]=arr[i]-32;
        i++;
    }
    printf("%s",arr);
    
    return 0;
}
