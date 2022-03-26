#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    if(a==b)
        printf("Equal both no.");
    else
        printf("Not Equal");
    return 0;
}
