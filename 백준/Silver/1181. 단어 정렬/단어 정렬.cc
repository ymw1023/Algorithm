#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static compare(const void* first, const void* second)
{
    if(strlen((char*) first)>strlen((char*) second))
        return 1;
    else if(strlen((char*) first)==strlen((char*) second)&&(strcmp((char*) first,(char*) second)<0?0:1))
        return 1;
    else
        return 0;
}

int main()
{
    int i,n;
    
    scanf("%d",&n);
    char arr[n][51]; //배열
    
    for(i=0;i<n;i++)  //입력
    {
        getchar();
        scanf("%s",arr[i]);
    }
    
    qsort(arr,n,sizeof(char)*51,compare); //정렬
    
    for(i=0;i<n;i++)
    {
        if(!(strcmp(arr[i],arr[i+1])))
            continue;
        printf("%s\n",arr[i]);
    }


    return 0;
}
