#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a=0,b=1,temp;

    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Fibonacci Series is : %d, %d ",a,b);


    for(i=2;i<n;i++){
        temp=a+b;
        a=b;
        b=temp;
        printf(",%d ",b);


    }
    return 0;
}
