#include <stdio.h>
#define PI 3.14159265359

int main()
{
    int r;
    double c1,c2;
    
    scanf("%d",&r);
    
    c1=(double)r*r*PI;
    c2=(double)r*r*2;
    printf("%.6lf\n",c1);
    printf("%.6lf\n",c2);

    return 0;
}