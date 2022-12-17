#include <stdio.h>
int main() 
{
int num[5];
  printf("Enter 5 numbers: ");
  for(int i = 0; i < 5; ++i)
 {
     scanf("%d", &num[i]);
  }
  printf("The 5 numbers are \n ");
  for(int i = 0; i < 5; ++i) 
  {
     printf("%d\n",num[i]);
  }
  return 0;
}