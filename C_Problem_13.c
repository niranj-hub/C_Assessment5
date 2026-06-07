#include <stdio.h>
int main()
{
    int i,ones,rev;
    printf("Enter a number: ");
    scanf("%d",&i);
    rev=0;
    for(i=i;i>0;i=i/10)
    {
        ones=i%10;
        rev=rev*10+ones;
    }
    printf("%d",rev);
}
