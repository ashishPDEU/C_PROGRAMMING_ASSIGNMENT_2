#include <stdio.h>
int main() 
    {
    int n;
    n=100;
    int i = 1;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%13==0)
        {
       sum+=i;
        }
        
    }
     printf("divisible by 13 is \n %d\t",sum);
return 0;
    }
