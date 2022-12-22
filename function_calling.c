#include<stdio.h>
#include<stdlib.h>
void operation1()
{
    float a=2.4,b=1.8;
    printf("The addition of a and b are :%f\n",a+b);
}
void operation2()
{
    float a,b;
    printf("The subtraction of a and b are :%f\n",a-b);
}
void operation3()
{
    float a,b;
    printf("The multiplication of a and b are :%f\n",a*b);
}
void operation4()
{
    float a,b;
    printf("The division of a and b are :%f",a/b);
}
void basic(void (*operation)())
{
    operation();
}
int main()
{
    basic(operation1);
    basic(operation2);
    basic(operation3);
    basic(operation4);
}