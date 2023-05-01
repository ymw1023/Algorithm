#include <stdio.h>

int main()
{
    int i,cnt=1;
    char a;
    
    for(i=0;i<6;i++)
    {
        scanf("%c",&a);
        if(a=='W')
        {
            cnt++;
        }
        scanf("%c",&a);
    }
    switch(cnt/2)
    {
        case 3:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 1:
            printf("3");
            break;
        default:
            printf("-1");
            break;
    }
    return 0;
}
