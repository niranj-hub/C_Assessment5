#include <stdio.h>
int main()
{
    int i,ones,tens,sum;
    for(i=11;i<100;i++)
    {
        i=i+1;
        ones=i%10;
        tens=i/10;
        sum=ones+tens;
        if(sum==6)
        {
            printf("%d\n", i);   
        }
    }
}
