#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=(6-i))
                printf(" *");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
