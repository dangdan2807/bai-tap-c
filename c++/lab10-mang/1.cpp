#include <stdio.h>
void nhapmang (int c[], int &a, int &b, int &n)
{
	printf("nhap a :"); 
	scanf("%d",&a);
	printf("nhap b :"); 
	scanf("%d",&b);
	n=b-a-1;
 	for(int i=0;i<n;i++)
 	{
 		do {
			printf("c[%d]=",i);
			scanf("%d",&c[i]);
 		}while (c[i]<a && c[i]>b);
 	}
}
void xuatmang (int c[],int n)
{ 
	for (int i=n-1;i>=0;i--)
	{
		printf("%d\t",c[i]);
	}		
}
int main()
{ int c[100],a,b,n;
	nhapmang(c, a, b, n);
	xuatmang(c,n);
	return 0;
}
