#include <iostream>
#include <stdio.h>
using namespace std;
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
		cout << "\n=====Menu=====\n";
		cout <<"1. Tao day so\n";
		cout <<"2. Hien thi day so\n";
		cout <<"3. Tim Max\n";
		cout <<"4. Tim Min\n";
		cout <<"5. Tim phan tu X\n";
		cout <<"6. Bo sung phan tu\n";
		cout <<"7. Chen phan tu vao vi tri k\n";
		cout <<"8. Xoa phan tu thu k\n";
		cout <<"9. Sap xep day so\n";
		cout <<"10. Thoat\n";
		cout <<"Chon chuc nang bang cach nhap 1 so tu 1 den 10: ";
		do{
			cin >> chon;
		}while(chon<=1 || chon >10 || chon != 10);
		switch(chon)
		{
			int n;
			case 1: cout <<"Tao day so\n";
				cout <<"Nhap so luong phan tu cua mang: ";
				do{
					cin >> n;
				}while(n<=0);
				int mang[MAX];
				input(mang, n);
				break;
			case 2:
				cout <<"\nHien thi day so\n";
				 output(mang, n);break;
			case 3:cout <<"\nTim Max\n";
				cout <<"Gia tri lon nhat cua day la: " << max(mang, n) << "\n";
				break;
			case 4:cout <<"\nTim Min\n";
				cout <<"Gia tri nho nhat cua day la: " << min(mang, n) << "\n";
				break;
			case 5:cout <<"\nTim phan tu X\n";
				int x, tim;
				cout <<"Nhap gia tri x can tim: ";
				cin >>x;
				tim=timkiem(mang,n, x);
				if(tim==-1)
					cout <<"khong tim thay " << x << "trong day so.\n";
				else
					cout <<"Tim thay "<<x<<" o phan tu "<< tim << " cua day so\n";
				break;
			case 6:cout <<"\nBo sung phan tu\n";
				int th;
				cout <<"Nhap gia tri can chen: ";
				cin >> th;
				ch_end(mang, n, th);
				output(mang, n);
				break;
			case 7:cout <<"\nChen phan tu vao vi tri k:\n";
				cout <<"Nhap gia tri phan tu va vi tri k: ";
				int gtk, vtk;
				cin >> gtk, vtk;
				chen(mang, n, gtk, vtk);
				output(mang, n);
				break;
			case 8:cout <<"\nXoa phan tu cua day so\n";
				int vtxoa;
				cout << "Nhap vi tri can xoa: ";
				cin >> vtxoa;
				xoa(mang, n, vtxoa);
				output(mang, n);
				break;
			case 9:
				cout <<"\nSap xep cac phan tu cua mang\n";
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
		cin >> A[i];
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
	for(int i=n; i>=k; i--)
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
				A[i]=temp;
				A[i]=A[j];
				A[j]=A[i];
			}
		}
	}
}
