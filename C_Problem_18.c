#include <stdio.h>
int main()
{
    int n,i,count,num;
    printf("Enter a number:");
    scanf("%d",&n);
    num = n%100; 
    count = 0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
