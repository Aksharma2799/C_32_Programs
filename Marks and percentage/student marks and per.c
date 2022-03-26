#include<stdio.h>
int main()
{
    float math,phy,chem,eng,hindi,sum;
    float per;
    printf("Enter marks\n");
    printf("Math :");
    scanf("%f",&math);

    printf("Physics :");
    scanf("%f",&phy);
    printf("Chemistry :");
    scanf("%f",&chem);

    printf("English :");
    scanf("%f",&eng);

    printf("Hindi :");
    scanf("%f",&hindi);

    sum=math+phy+chem+eng+hindi;
    printf("Total marks is : %f \n",sum);
    per=(sum/5);
    printf("Percentange %f : ",per);
    return 0;



}
