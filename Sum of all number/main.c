//Ashish Vishwakarma
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,sum=0;

    printf("Enter any Number which you want !:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Number is %d",i);
        sum=sum+i;
        printf(",  Sum=%d\n",sum);
    }

    n = n*((n+1)/2);
    printf("\n\nSum of all number is : %d\n",n);
    printf("___________________________\n");
    printf("\nThank You!\n");

    return 0;

}
