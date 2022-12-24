#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    int *a= (int*)(calloc(2*n,sizeof(int)));
    for (int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int *b=(int*)realloc(a,2*n*sizeof(int));
    printf("Prev address of a is %d and the new address is %d\t",a,b);
    for (int i=0;i<n;i++)
    {
        b[i]=i+1;
    }
     for (int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}