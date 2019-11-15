#include <stdio.h>
#include <iostream>
using namespace std;
void nhapdiem(int a[], int n);
void xuatdiem(int a[], int n);
void xeploai (int a);
void xoasv(int a[], int &n, int k);
int main()
{
	int n;
	printf("Nhap N sinh vien: ");
	do{
		scanf("%d", &n);
		if(n<0)
			printf("n>0, nhap lai: ");
	}while(n<0);
	int diem[n];
	nhapdiem(diem, n);
	xuatdiem(diem, n);
	printf("\n-------------------------------------\n");
	printf("|\tSTT\t|\tDIEM\t|\tXEP LOAI\t|\n");
	printf("-------------------------------------\n");
	int k;
	xoasv(diem, n, k);
	xuatdiem(diem, n);
	return 0;
}

void nhapdiem(int a[], int n)
{
	printf("\tNHAP DIEM\n");
	for(int i=0; i<n; i++){
		printf("Sinh vien thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void xuatdiem(int a[], int n)
{
	printf("\tXUAT DIEM\n");
	for(int i=0; i<n; i++){
		printf("Sinh vien thu %d: %d\n", i+1, a[i]);
	}
}

void xeploai(int a)
{
	if(a>=0 || a<5)
		printf("A");
	else if(a>=5 || a<7)
		printf("B");
	else if(a>=7 || a<9)
		printf("C");
	else if(a>=9 || a<=10)
		printf("D");
}

void xoasv(int a[], int &n, int k)
{
	printf("Nhap so cua sinh vien can xoa: ");
	scanf("%d", &k);
	int temp;
	for(int i=n; i>=k; i--){
		a[i]=a[i+1];
	}
	n--;
}
