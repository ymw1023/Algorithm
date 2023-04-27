#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}P;

int static compare(const void* first,const void* second)
{
    if((*(P*)first).y>(*(P*)second).y||((*(P*)first).y==(*(P*)second).y&&(*(P*)first).x>(*(P*)second).x))
        return 1;
    else
        return 0;
}

int main()
{
    int i,j,n;
    P temp;
    
    scanf("%d",&n);
    P arr[n]; //좌표 배열
    
    for(i=0;i<n;i++) //입력
    {
        scanf("%d %d",&arr[i].x,&arr[i].y);
    }
    
    qsort(arr,n,sizeof(P),compare); //정렬
    
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i].x,arr[i].y);
    }

    return 0;
}
