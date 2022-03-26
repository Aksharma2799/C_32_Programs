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
    printf("Total marks is : %.2f \n",sum);
    per=(sum/5);
    printf("Percentange %.2f : ",per);

    if(per>=90)
        printf("Grade 'A'");
    else if(per>=80)
        printf("Grade 'B'");
    else if(per>=60)
        printf("Grade 'C'");
    else
        printf("Grade 'D'");



    return 0;



}
