#include <stdio.h>

int main()
{
    int i,n,score;
    char name[11];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s %d",name,&score);
        
        if(score>=97)
        {
            printf("%s A+\n",name);
        }
        else if(score>=90)
        {
            printf("%s A\n",name);
        }
        else if(score>=87)
        {
            printf("%s B+\n",name);
        }
        else if(score>=80)
        {
            printf("%s B\n",name);
        }
        else if(score>=77)
        {
            printf("%s C+\n",name);
        }
        else if(score>=70)
        {
            printf("%s C\n",name);
        }
        else if(score>=67)
        {
            printf("%s D+\n",name);
        }
        else if(score>=60)
        {
            printf("%s D\n",name);
        }
        else
        {
            printf("%s F\n",name);
        }
    }
    return 0;
}
