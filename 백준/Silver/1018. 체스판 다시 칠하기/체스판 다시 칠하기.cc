#include <stdio.h>

int main()
{
    int i,j,n,k,l,cnt1,cnt2,d,m,min=64;
    char arr1[8][8],arr2[8][8];
    
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if((i+j)%2)
            {
                arr1[i][j]='B';
            }
            else
            {
                arr1[i][j]='W';
            }
        }
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if((i+j)%2)
            {
                arr2[i][j]='W';
            }
            else
            {
                arr2[i][j]='B';
            }
        }
    }
    scanf("%d %d",&n,&m);
    char arr3[n][m];
    for(i=0;i<n;i++)
    {
        getchar();
        for(j=0;j<m;j++)
        {
            scanf("%c",&arr3[i][j]);
        }
    }
    for(i=0;i<n-7;i++)
    {
        for(j=0;j<m-7;j++)
        {
            cnt1=0;
            cnt2=0;
            for(k=0;k<8;k++)
            {
                for(l=0;l<8;l++)
                {
                    if(arr3[i+k][j+l]!=arr1[k][l])
                    {
                        cnt1++;
                    }
                    if(arr3[i+k][j+l]!=arr2[k][l])
                    {
                        cnt2++;
                    }
                }
            }
            if(cnt1<min)
            {
                min=cnt1;
            }
            if(cnt2<min)
            {
                min=cnt2;
            }
        }
    }
    
    printf("%d",min);

    return 0;
}
