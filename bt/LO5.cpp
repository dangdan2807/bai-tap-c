#include <stdio.h>
#include <iostream>
using namespace std;
void nhapdiem(int a[], int n);
void xuatdiem(int a[], int n);
char xeploai (int a);
void sapxep(int a[], int n);
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
	sapxep(diem, n);	printf("\n-----------------------------------------\n");
	printf("|\tSTT\t\t|\tDIEM\t|\tXEP LOAI\t|\n");
	printf("-----------------------------------------\n");
	for(int i=0; i<n; i++){
		printf("|\t %d \t\t|\t %d \t\t|\t\t %c \t\t|\n", i, diem[i], xeploai(diem[i]));
		printf("-----------------------------------------\n");
	}
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
		do{
			scanf("%d", &a[i]);
			if(a[i] <0 || a[i] >10)
				printf("0<= diem <= 10, nhap lai: ");
		}while(a[i] <0 || a[i] >10);
	}
}

void xuatdiem(int a[], int n)
{
	printf("\tXUAT DIEM\n");
	for(int i=0; i<n; i++){
		printf("Sinh vien thu %d: %d\n", i+1, a[i]);
	}
}

char xeploai(int a)
{
	if(a>=0 && a<5)
		return 'A';
	if(a>=5 && a<7)
		return 'B';
	if(a>=7 && a<9)
		return 'C';
	if(a>=9 && a<=10)
		return 'D';
}

void sapxep(int a[], int n)
{
	int temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
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
