#include <stdio.h>

int main ()
{
    int a,b,c,d,e,cnt;
  scanf("%d",&a);
  cnt=0;
  b=a;
  while(1)
  {
      cnt++;
      b-=cnt;
      if(b<=0)
      {
          break;
      }
  }
  c=b+cnt;
  if(cnt%2)
  {
      d=cnt-c+1;
      e=c;
  }
  else
  {
      d=c;
      e=cnt-c+1;
  }
  
  printf("%d/%d",d,e);

  return 0;
}