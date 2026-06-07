#include <stdio.h>
int main()
{
    int i,ones,tens,sum;
    sum=0;
    for(i=10;i<100;i++)
    {
        i=i+1;
        ones=i%10;
        tens=i/10;
        if(tens==7)
        {
            sum=sum+i;
        }
    }
    printf("%d", sum);   
}
