#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum;
    printf("Enter a No. to know table \n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d =  %d\n",n,i,n*i);
    }
    return 0;
}
