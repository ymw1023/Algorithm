#include <stdio.h>

int main()
{
    int i,d,o,t,k,count=0;
    
    scanf("%d",&i);
    
    d=i;
    
    do{
        
        t=d/10;
        o=d%10;
        k=(t+o)%10;
        d=10*o+k;
        
        count++;
    }while(i!=d);
    
    printf("%d",count);
   
    return 0;
}