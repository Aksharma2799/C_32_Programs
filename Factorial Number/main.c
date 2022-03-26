#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,sum=1,fact;
  printf("Enter Number :\n");
  scanf("%d",&fact);
  if(fact==0 || fact ==1)
  {
      printf("Factorial is : 1");
  }

  else if (fact < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");

  else
    {
    for(i=fact;i>0;i--){
    printf("%d",i);
    sum=sum*i;

    }
    printf(" Factorial is : %d \n",sum);

  }
}
