#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(n>0)
        return(n*fact(n-1));
    else
        return(1);
}

int main()

{
    int n;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    printf("Factorial of %d is : ",fact);

}
