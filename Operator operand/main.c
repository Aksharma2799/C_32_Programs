#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,sub,mul,div;
    char op;
    printf("Enter Operator !\n");
    scanf("%c",&op);

    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    switch(op)
    {
    case'+':
        {
            sum=a+b;
            printf(" Result is : %d",sum);
            break;
        }

    case'-':
        {
            sub=a-b;
            printf(" Result is : %d",sub);
            break;
        }
    case'*':
        {
            mul=a*b;
            printf(" Result is : %d",mul);
            break;
        }

    case'/':
        {
            div=a+b;
            printf(" Result is : %d",div);
            break;
        }
    default:
        {
        printf("Invalid" );
        }
    }

    return 0;
}
