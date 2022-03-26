#include<stdio.h>
#include<math.h>
int main()
{
    int principal,amount,rate,time, SI,CI;
    printf("Enter the value principal, rate, time \n");
    scanf("%d %d %d",&principal,&rate,&time);
    SI=(principal*rate*time)/100;
    printf("Simple interest is :%d ",SI);
    amount=principal*(pow((1 +(rate/100)),time));

    printf("Compund  interest is :%d ",amount);


    return 0;
}
