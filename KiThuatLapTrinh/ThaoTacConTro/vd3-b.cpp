#include <stdio.h>

int main()
{
  int ar[] = {10, 15, 4, 25, 3, -4}, *p, i;
  p = &ar[2];
  printf("Cac gia tri cua mang:\n\n");
  for(i=0; i < 6; i++)
    printf("ar[%d] = %4d\n", i, ar[i]);
  printf("\nCho biet gia tri cua cac bieu thuc\n\n");
  printf("a) *(p+1) = %d\n\n", *(p+1));
  printf("b) p[-1] = %d\n\n", p[-1]);
  printf("c) (ar-p) = %d\n\n", (ar-p));
  printf("d) ar[*p++] = %d\n\n", ar[*p++]);
  printf("e) *(ar+ar[2]) = %d\n\n", *(ar+ar[2]));
  return 0;
}