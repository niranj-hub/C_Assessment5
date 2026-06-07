#include <stdio.h>
int main()
{
    int n, i, count,sum,temp,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    count=0;
    sum=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    for(temp=n;temp>0;temp=temp/10)
    {
        rem=temp%10;
        sum=sum+rem;
    }
    if(count==2 && sum==14)
    {
        printf("Prime & Sum of digits is 14");
    }
    else
    {
        printf("Not Prime & Sum of digits is not 14");
    }
}
