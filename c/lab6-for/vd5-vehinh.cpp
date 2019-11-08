
#include <stdio.h>
//using namespace std;
int main()
{
	int a, b, c;
	printf( "Chon hinh can ve: \n");
	printf( "1. Hinh chu nhat \n");
	printf( "2. Hinh hcn rong \n");
	printf( "3. Hinh tam giac vuong \n");
	printf( "4. Hinh tam giac vuong nguoc \n");
	printf( "5. Hinh tam giac deu \n");
	printf( "6. Hinh tam giac vuong rong \n");
	printf( "7. Hinh tam giac vuong nguoc rong\n");
	printf( "8. Hinh vuong \n");
	printf( "9. Hinh vuong rong \n");
	printf( "Nhap so cua hinh can ve: ");
	do{
	scanf("%d", &c);
	}while(c >9);
	printf("\n");
	switch(c)
	{
		case 1:
			printf( "Ve hinh chu nhat: \n");
			printf( "Nhap chieu dai va chieu rong  canh: ");
			scanf("%d%d", &a, &b);
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=b; j++)
				{
					printf( "* ");
				}
				printf("\n");
			}
			break;
		case 2: 
			printf("Ve hcn rong \n");
			printf( "Nhap chieu dai va chieu rong cac canh: ");
			scanf("%d%d", &a, &b);
			for(int i=1; i<=b; i++)
			{
				for(int j=1;j<=a;j++)
				{
					if(i==1 || j==1 || i==b || j==a)
						printf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}break;
		case 3:
			printf("Ve tam giac vuong: \n");
			printf("Nhap chieu cao tam giac: ");
			scanf("%d", &a);
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=i ;j++)
				{
					printf( "* ");
				}
				printf("\n");
			}break;
		case 4:
			printf("Ve tam giac vuong nguoc \n");
			printf("Nhap chieu cao tam giac: ");
			scanf("%d", &a);
			for(int i=1; i<=a; i++)
			{
				for(int j=a; j>=i ;j--)
				{
					printf( "* ");
				}
				printf("\n");
			}break;
		case 5:
			printf("Ve tam giac deu\n");
			printf("Nhap chieu cao tam giac: ");
			scanf("%d", &a);
			for(int i=1;i<=a;i++)
			{
				for(int j=1; j<=a-i;j++)
				{
					printf(" ");
				}
				for(int k=1; k<=i; k++)
				{
					printf( "* ");
				}
				printf("\n");
			}break;
		case 6: printf("Ve hinh tam giac vuong rong\n");
			printf("Nhap chieu cao tam giac: ");
			scanf("%d", &a);
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=i ;j++)
				{
					if(i==1 || j==1 || i==a || j==a || j==i)
						printf( "* ");
					else
						printf( "  ");
				}
						printf("\n");
			}break;
		case 7:
			printf("Ve tam giac vuong nguoc rong \n");
			printf("Nhap chieu cao tam giac: ");
			scanf("%d", &a);
			for(int i=1; i<=a; i++)
			{
				for(int j=a; j>=i ;j--)
				{
					if(i==1 || j==1 || i==a || j==a || j==i)
						printf( "* ");
					else
						printf( "  ");
				}
				printf("\n");
			}break;
		case 8:
			printf( "Ve hinh vuong: \n");
			printf( "Nhap chieu dai canh: ");
			scanf("%d", &a);
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=a; j++)
				{
					printf( "* ");
				}
				printf("\n");
			}break;
		case 9: printf("Ve hinh vuong rong\n");
			printf( "Nhap chieu canh: ");
			scanf("%d", &a);
			for(int i=1; i<=a; i++)
			{
				for(int j=1;j<=a;j++)
				{
					if(i==1 || j==1 || i==a || j==a)
						scanf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}break;
	}
	
	return 0;
}