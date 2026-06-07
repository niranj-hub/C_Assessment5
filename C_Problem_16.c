#include <stdio.h>
int main()
{
    int n, i, count;
    printf("Enter a number:");
    scanf("%d",&n);
    count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
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
