#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;
int songuyento(int k);
int sochinhphuong(int k);
int sodoixung(int k);
int soboi3(int k);
int main()
{
	#if 1
	int n, a;
	cout << "Nhap so phan tu cua mang: ";
	do{
		cin >>n;
	}while(n<=0);
	srand(time(NULL));
	int mang[n];
	// in va nhap cac phan tu cua mang
	cout <<"Day A la: ";
	for(int i=0; i<n; i++){
		a=rand()%n;
		mang[i]=a;
		cout << mang[i] << " ";
	}
	// so nguyen to
	cout << "\ntat ca cac so nguyen to cua day A: \n";
	for(int s=0, d=0; s<n; s++)
	{
		int b;
		b=songuyento(mang[s]);
		if(b==1){
			d++;
			cout << mang[s] << " ";
			if(d%10==0)
			cout << "\n";
		}
	}
	// so chinh phuong
	int c=0;
	for(int i=0; i<n; i++)
	{
		if(sochinhphuong(mang[i])==1)
			c+=mang[i];
	}
	cout <<"\nTong cua cac so chinh phuong cua day A la: " << c;
	// so doi xung
	int d=0;
	for(int i=0; i<n; i++)
	{
		int v=sodoixung(mang[i]);
		if(v==1)
			d++;
	}
	cout <<"\nSo luong cac so doi xung trong day A la: " << d;
	#endif
	// so bo 3
	int tb=0, dem=0;
	for(int i=0;i<n;i++)
	{
		int s=soboi3(i);
		if(s==1)
		{
			tb+=i;
			dem+=1;
		}
	}
	int tbc=tb/dem;
	cout << "\ntrung binh cong cac so boi 3 cua day A la: "<< tbc;
	return 0;
}
int songuyento(int k)
{
	if (k < 2)
		return 0;
	else if (k>2)
	{
		if (k % 2 == 0)
			return 0;
		for (int i = 3; i < sqrt((float)k); i += 2) 
		{
			if (k%i == 0)
				return 0;
		}
	}
	return true;
}
int sochinhphuong (int k)
{
	for(int i=1; i<=k; i++)
	{
		if(i*i==k)
			return 1;
	}
	return 0;
}
int sodoixung(int k)
{
	int x, a, c=k;
	while(k!=0)
	{
		x=k%10;
		a=(k*10)+x;
		k/=10;
	}
	if(a==c)
		return 1;
	else
		return 0;
}
int soboi3(int k)
{
	int a=0, b=0;
	while(k>0)
	{
		a=k%10;
		b+=a;
		k/=10;
	}
	if(b%3==0)
		return 1;
	else
		return 0;
}
