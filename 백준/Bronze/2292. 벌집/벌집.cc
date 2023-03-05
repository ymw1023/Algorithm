#include <stdio.h>

main ()
{
  int a, sum, cnt = 0;
  scanf ("%d", &a);
  sum = 1;

    while(1)
    {
        sum+=cnt*6;
        cnt++;
        if(sum>=a)
        {
                break;
        }
    }



  printf ("%d", cnt);

  return 0;
}