#include <stdio.h>
#include <stdlib.h>

int main()
{

    int centigrade,fahrenheit;

    printf("Enter temperature in centigrade : \n");
    scanf("%d",&centigrade);

    fahrenheit=32+(centigrade*9)/5;
    printf("Centigrade to fahrenheit : %d  ",fahrenheit);

}
