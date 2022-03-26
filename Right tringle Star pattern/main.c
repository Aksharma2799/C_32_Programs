#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=i;j++)
        {
            //Condition for printing '*' and 'space'.
            if(j<=i)
                printf(" * ");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
