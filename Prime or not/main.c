#include <stdio.h>
#include <stdlib.h>

//Ashish Vishwakarma Github : Aksharma2799

int main()
{
    int n,i,count=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=2;i<n;i++){
            if(n%i==0){
                count=1;
            }
    }

    if(count==0)
        printf("%d : is a Prime Number !",n);

    else
        printf("%d : is a Composite Number !",n);


    return 0;
}
