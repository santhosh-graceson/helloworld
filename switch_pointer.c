#include<stdio.h>
void add(int a, int b)
{
    printf("The addition of a and b: %d",a+b);
}
void subtract(int a,int b)
{
    printf("The difference of a and b: %d",a-b);
}
void multiply(int a,int b)
{
    printf("The product of a and b: %d",a*b);
}
void division(int a,int b)
{
    printf("The division of a and b: %d",a/b);
}
int main()
{
    void (*ptr_arr[])(int,int)={add, subtract, multiply, division};
    unsigned int ch,a,b;
    a=15;
    b=31;
    printf("Enter the options: 0 for Addition, 1 for Subtraction,2 for Multiplication and 3 for Division");
    scanf("%d",&ch);
        if (ch>3) return 0;
        (*ptr_arr[ch])(a,b);
    return 0;
}