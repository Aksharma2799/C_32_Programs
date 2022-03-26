#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum_odd=0,sum_even=0,i,even,odd;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Number is : %d\n",i);
        if(i%2==0){

            sum_even=sum_even+i;
        }

        else{
            sum_odd=sum_odd+i;
        }

    }
    printf("Sum of even number : %d\n",sum_even);
    printf("Sum of odd number : %d\n",sum_odd);

    return 0;
}
