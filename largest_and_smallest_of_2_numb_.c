#include <stdio.h>
int main() 
    {
    int a, b;
    printf("Enter two number\n ");
    scanf("%d %d", &a, &b);
        if (a >= b )
        {
            printf("Largest number is %d\n", a);
            printf("smallest number is %d\n", b);
        }
        else 
        {
            printf("Largest number is %d\n", b);
            printf("smallest number is %d\n", a);
        }
       
return 0;
    }
