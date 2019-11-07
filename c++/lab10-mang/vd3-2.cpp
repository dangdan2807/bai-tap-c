#include <stdio.h>
void input(int A[], int &n);
void output(int A[], int n);
int max(int A[], int n);
int min(int A[], int n);
int timkiem(int A[], int n, int x);
void ch_end(int A[], int &n, int x);
void chen(int A[], int &n, int x, int k);
void xoa(int A[], int &n, int k);
void sapxep(int A[], int n);
#define MAX 1000
int main()
{
	int chon;
	do{
		printf( "\n=====Menu=====\n");
		printf("1. Tao day so\n");
		printf("2. Hien thi day so\n");
		printf("3. Tim Max\n");
		printf("4. Tim Min\n");
		printf("5. Tim phan tu X\n");
		printf("6. Bo sung phan tu\n");
		printf("7. Chen phan tu vao vi tri k\n");
		printf("8. Xoa phan tu thu k\n");
		printf("9. Sap xep day so\n");
		printf("10. Thoat\n");
		printf("Chon chuc nang bang cach nhap 1 so tu 1 den 10: ");
		do{
			scanf("%d", &chon);
		}while(chon<=1 || chon >10);
		switch(chon)
		{
			int n;
			case 1: printf("Tao day so\n");
				printf("Nhap so luong phan tu cua mang: ");
				do{
					scanf("%d", &n);
				}while(n<=0);
				int mang[MAX];
				input(mang, n);
				break;
			case 2:
				printf("\nHien thi day so\n");
				 output(mang, n);break;
			case 3:printf("\nTim Max\n");
				printf("Gia tri lon nhat cua day la: %d\n",  max(mang, n));
				break;
			case 4:printf("\nTim Min\n");
				printf("Gia tri nho nhat cua day la: %d\n" ,min(mang, n));
				break;
			case 5:printf("\nTim phan tu X\n");
				int x, tim;
				printf("Nhap gia tri x can tim: ");
				scanf("%d", &x);
				tim=timkiem(mang,n, x);
				if(tim==-1)
					printf("khong tim thay %d rong day so.\n", x);
				else
					printf("Tim thay %d o phan tu %d cua day so\n", x , tim);
				break;
			case 6:printf("\nBo sung phan tu\n");
				int th;
				printf("Nhap gia tri can chen: ");
				scanf("%d", &th);
				ch_end(mang, n, th);
				output(mang, n);
				break;
			case 7:printf("\nChen phan tu vao vi tri k:\n");
				printf("Nhap gia tri phan tu va vi tri k: ");
				int gtk, vtk;
				scanf("%d%d", &gtk, &vtk);
				chen(mang, n, gtk, vtk);
				output(mang, n);
				break;
			case 8:printf("\nXoa phan tu cua day so\n");
				int vtxoa;
				printf( "Nhap vi tri can xoa: ");
				scanf("%d", &vtxoa);
				xoa(mang, n, vtxoa);
				output(mang, n);
				break;
			case 9:
				printf("\nSap xep cac phan tu cua mang\n");
				sapxep(mang, n);
				output(mang, n);
				break;
		}
	}while(chon != 10);
	return 0;
}
void input(int A[], int &n)
{
	for(int i=0; i<n; i++)
	{
		printf("nhap gia tri cua mang A[%d]= ", i);
		scanf("%d", &A[i]);
	}
}
void output(int A[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Phan tu A[%d]= %d\n", i, A[i]);
	}
}
int max(int A[], int n)
{
	int max=A[0];
	for(int i=0; i<n; i++)
	{
		if(max<A[i])
			max=A[i];
	}
	return max;
}
int min(int A[], int n)
{
	int min=A[0];
	for(int i=0; i<n; i++)
	{
		if(min>A[i])
			min=A[i];
	}
	return min;
}
int timkiem(int A[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]== x)
			return i;
	}
	return -1;
}
void ch_end(int A[], int &n, int x)
{
	n+=1;
	A[n-1]=x;
}
void chen(int A[], int &n, int x, int k)
{
	n+=1;
	for(int i=n; i>=k; i--)
	{
		A[i]=A[i-1];
	}
	A[k]=x;
}
void xoa(int A[], int &n, int k)
{
	for(int i=k; i<n; i--)
	{
		A[i]=A[i-1];
	}
	n--;
}
void sapxep(int A[], int n)
{
	int temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
}
