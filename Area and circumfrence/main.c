#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
int main()
{
    int r,area,circumfrence;
    printf("Enter any no.");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of %d is :%d \n",r,area);
    circumfrence=2*pi*r*r;
    printf("Circumfrence of %d is:%d",r,circumfrence);
}
