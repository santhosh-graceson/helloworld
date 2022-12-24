#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    int *a= (long*)(calloc(2*n,sizeof(long)));
    for (int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for (long i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int *b=(int*)realloc(n*2,(sizeof(int)));
    for (int i=0;i<n;i++)
    {
        a[i]=a[i+1];
        printf("%d",b[n]);
    }
    
}