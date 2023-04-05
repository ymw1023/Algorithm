#include <stdio.h>

int main()
{
    int A,B;
   
   scanf("%d %d",&A,&B);
   
   if(B<45)
   {
       if(A==0)
       {
           A=23;
           B=B+15;
       }
       else
       {
           A--;
           B=B+15;
       }
   }
   else
   {
       B=B-45;
   }
   
   printf("%d %d",A,B);
   
    return 0;
    
}