#include <stdio.h>

int main ()
{
    int x,y,ax,ay,bx,by,cx,cy;

    scanf("%d %d", &ax,&ay);
    scanf("%d %d", &bx,&by);
    scanf("%d %d", &cx,&cy);
     
    if(ax==bx)
    {
        x=cx;
        cy==ay?(y=by):(y=ay);
    }
    else if(ay==by)
    {
        y=cy;
        cx==ax?(x=bx):(x=ax);
    }
    else
    {
        if(cx==ax)
        {
            x=bx;
            y=ay;
        }
        else
        {
            x=ax;
            y=by;
        }
    }
      
    printf("%d %d",x,y);
  
    return 0;
}