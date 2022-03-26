#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b &&a>c)
        printf("A is greater than b and c");

    else if(b>a &&b>c)
        printf("B is greater than a and c");

     else
        printf("C is greater than a and b");

    return 0;
}
