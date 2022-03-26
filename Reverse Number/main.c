#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,y=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        y=y*10+r;
        n=n/10;
        }
    printf("Reverse is : %d",y);

    return 0;
}
