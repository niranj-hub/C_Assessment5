#include <stdio.h>
int main()
{
    int i,sum,ones;
    printf("Enter a number: ");
    scanf("%d",&i);
    sum=0;
    for(i=i;i>0;i=i/10)
    {
        ones=i%10;
        sum=sum+ones;
    }
    printf("%d",sum);
}
