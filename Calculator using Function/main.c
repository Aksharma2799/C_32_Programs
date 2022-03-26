#include <stdio.h>
#include <stdlib.h>

void input(){
    float a,b;
    printf("Enter the value of a and b : \n");
    scanf("%f %f",&a,&b);
}

void sum(){
    float a,b,sum;

    sum=a+b;
    printf("Sum of %f + %f : %f\n\n",a,b,sum);
}

void sub(){
    float a,b,sub;

    sub=a-b;
    printf("Subtraction of %f - %f : %f\n\n",a,b,sub);
}

void mul(){
    float a,b,mul;

    mul=a*b;
    printf("Multiplication of %f * %f : %f\n\n",a,b,mul);
}
void divide(){
    float a,b,div;

    div=a/b;
    printf("Division of %f / %f : %f\n\n",a,b,div);
}

float main()
{
    input();
    sum();
    sub();
    mul();
    divide();
}
