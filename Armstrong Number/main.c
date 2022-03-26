#include <stdio.h>
#include <stdlib.h>

//Ashish Vishwakarma  Github :- Aksharma2799

int main()
{
    int number,s,x,r;

    printf("Armstrong Numbers :- \n");
    for(number=1;number<=1000;number++)
    {
        s=0;
        x=number;
        while(x!=0){
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==number)
            printf("%d\n",number);
    }
    return 0;
}
