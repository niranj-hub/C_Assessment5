#include <stdio.h>
int main()
{
    int i,count;
    printf("Enter a number: ");
    scanf("%d",&i);
    count=0;
    for(count=0;i>0;i=i/10)
    {
        count=count+1;
    }
    printf("%d",count);
}
