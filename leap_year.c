#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("Enter the year:\t");
    scanf("%d",&year);
    if(year%4==0)
    printf("The given year is a leap year");
    else 
    printf("It is non leap year");
    return 0;
}