#include <stdio.h>

int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n>0)
{
    printf("number is positive");
}
else if(n<0)
{
    printf("number is negative");
}
else
{
    printf("the number is zero");
}
    return 0;
}

