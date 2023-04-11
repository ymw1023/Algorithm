#include <stdio.h>

int main()
{
    int i=0,dial,sum=0;
    char ca[15];
    
    scanf("%s",ca);
    
    while(ca[i]!='\0')
    {
        switch(ca[i])
        {
            case 'A':
            case 'B':
            case 'C':
                dial=2;
                break;
            case 'D':
            case 'E':
            case 'F':
                dial=3;
                break;
            case 'G':
            case 'H':
            case 'I':
                dial=4;
                break;
            case 'J':
            case 'K':
            case 'L':
                dial=5;
                break;
            case 'M':
            case 'N':
            case 'O':
                dial=6;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                dial=7;
                break;
            case 'T':
            case 'U':
            case 'V':
                dial=8;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                dial=9;
                break;
        }
        sum+=dial+1;
        i++;
    }
    
    printf("%d",sum);
   
    return 0;
}