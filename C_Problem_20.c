#include <stdio.h>
int main()
{
    int n,i,count;
    printf("Enter number:");
    scanf("%d",&n);
    count=0;
    for(i=1;i<=n;i++)
    {
        if(i==2||i==3||i==5||i==7)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}
