#include <stdio.h>
#include <stdlib.h>

// Ashish Vishwakarma  Github :- Aksharma2799

int main()
{
    int a,b;
    printf("Enter two Number :-\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a = %d, b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a = %d, b = %d",a,b);
    return 0;
}

