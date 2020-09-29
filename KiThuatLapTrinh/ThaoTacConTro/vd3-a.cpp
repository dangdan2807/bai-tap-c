#include <stdio.h>

int main()
{
  int a[] = {9, 8, 7, 6, 18}; 
  int i;
  for(i = 0; i < 5; i++)
    printf("%d\n",*(a+i));
  return 0;
}