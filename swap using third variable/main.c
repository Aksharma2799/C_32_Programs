#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("Enter the value of a and b :\n");
    scanf("%d %d",&a,&b);
    printf("Before swap %d , %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap %d , %d",a,b);
}
