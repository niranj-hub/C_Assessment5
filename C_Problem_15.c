#include <stdio.h>
int main()
{
    int i, temp, first, divisor, middle, result;
    printf("Enter number: ");
    scanf("%d", &i);
    temp=i;
    divisor=1;
    for(temp=i;temp>=10;temp=temp/10)
    {
        divisor=divisor*10;
    }
    first=temp;
    if(first%2==0)
    {
        printf("%d", i);
    }
    else
    {
        middle=i%divisor;
        result=(first-1)*divisor+middle;
        printf("%d", result);
    }
}
