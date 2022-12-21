#include<stdio.h>
#include<stdlib.h>
int *fun()
{
   static int a=2;
    return &a;
}
int main()
{
int *p=fun();
fflush(stdin);
printf("The value of the function is %d",*p);
}
