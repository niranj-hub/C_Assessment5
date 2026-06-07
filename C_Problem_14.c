#include <stdio.h>
int main()
{
    int i,last,temp,divisor,first,middle,result;
    printf("Enter a number: ");
    scanf("%d",&i);
    last=i%10;
    temp=i;
    divisor=1;
    for(temp=i;temp>=10;temp=temp/10)
    {
        divisor=divisor*10;
    }
    first=temp;
    middle=(i%divisor)/10;
    result=last*divisor+middle*10+first;
    printf("%d",result);
}
