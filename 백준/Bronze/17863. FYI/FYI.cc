#include <stdio.h>

int main()
{
    int i,chk=1;
    char arr[8];
    
    scanf("%s",arr);
    
    for(i=0;i<3;i++)
    {
        if(arr[i]!='5')
        {
            chk--;
            break;
        }
    }
    
    printf("%s",chk?"YES":"NO");
    
    return 0;
}