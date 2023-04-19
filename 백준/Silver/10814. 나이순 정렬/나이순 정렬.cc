#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    char name[101];
    int num;
}P;

int static compare(const void* first,const void* second)
{
    if((*(P*)first).age>(*(P*)second).age)
        return 1;
    else if((*(P*)first).age==(*(P*)second).age&&(*(P*)first).num>(*(P*)second).num)
        return 1;
    else if((*(P*)first).age>(*(P*)second).age)
        return -1;
    else
        return 0;
}

int main()
{
    int i,n;
    
    scanf("%d",&n);
    
    P arr[n];
    
    for(i=0;i<n;i++)     //입력
    {
        scanf("%d %s",&arr[i].age,arr[i].name);
        arr[i].num=i+1;
    }
    
    qsort(arr,n,sizeof(P),compare);    //정렬
    
    for(i=0;i<n;i++)    //출력
    {
        printf("%d %s\n",arr[i].age,arr[i].name);
    }

    return 0;
}
