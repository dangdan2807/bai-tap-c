#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int chon, a, b, c;
	float s, Area=0, r;
	printf("1. Hinh tam giac\n");
	printf("2. Hinh chu nhat\n");
	printf("3. Hinh tron\n");
	printf("4. Thoat\n");
	printf("Hay bam so de chon hinh can tinh hoac bam 4 de ket thuc: ");
	scanf("%d", &chon);
	switch(chon)
	{
		case 1: printf("Tinh hinh tam giac\n");
			printf("a= ");
			scanf("%d", &a);
			printf("b= ");
			scanf("%d", &b);
			printf("c= ");
			scanf("%d", &c);
			s=(a+b+c)/3;
			Area=sqrt(s*(s-a)*(s-b)*(s-c));
			if(a+b>c && b+c>a && c+a>b)
				printf("Dien tich: %f", Area);
			else 
				printf( "3 so khong phai la 3 canh cua tam giac");break;
		case 2: printf("a= ");
			scanf("%d", &a);
			printf( "b= ");
			scanf("%d", &b);
			s=a*b;
			printf("Dien tich: %f", s);
		break;
		case 3: printf( "R= ");
			scanf("%f", &r);
			s=3.14*r*r;
			printf( "Dient tich: %f", s);
		break;
		case 4: break;
	}
	return 0;
}
