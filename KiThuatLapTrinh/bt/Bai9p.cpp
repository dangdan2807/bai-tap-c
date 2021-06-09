#include <stdio.h>
int main()
{
	char *c1, *c2, *p, c;
	c1 = new char;
	c2 = new char;
	
	printf("Nhap ky tu thu nhat : ");	scanf ("%c", c1);
	fflush(stdin);
	printf("Nhap ky tu thu hai : ");	scanf ("%c", c2);
	if (*c1 > *c2)
		{
			c = *c1 ; *c1 = *c2 ; *c2 = c; 
		}
	
	for (c = *c1 ; c <= *c2 ; c++)
		printf("\n %c	%d 	%o	%x\n", c, c, c, c);
/* Sai
	for (p = c1 ; p <= c2 ; p++)
		printf("\n %c	%d 	%o	%x\n", *p, *p, *p, *p);	
*/	
	return 0;	
}