#include <iostream>
#include <stdio.h>
using namespace std;
int sum(int n);
int rightN(int n);
int div1(int n, int a);
void ve();
void check(int n);
void khung(int a, int b);
int main()
{
  int n, a2, a3, a5, a6, a9, b;
  cout <<"Nhập số nguyên không âm n: \n";
  do{
  	cin >> n;
  }while(n<=0);
  b=rightN(n);
  cout <<"Tổng của các số n là: " << sum(n)<< "\n";
  cout <<"Chữ số hàng đơn vị của số n là: " << b<< "\n";
  a2=div1(n, 2);
  a3=div1(n, 3);
  a5=div1(n, 5);
  a6=div1(n, 6);
  a9=div1(n, 9);
  ve();
  cout <<"|\tChia hết \t|\t Yes/No  \t|\n";
  ve();
  khung(a2, 2);
  khung(a3, 3);
  khung(a5, 5);
  khung(a6, 6);
  khung(a9, 9);
  return 0;
}
int sum(int n)
{
	int tong=0;
	for(int i=0; i<n; i+=1){
		tong+=n;
	}
	return tong;
}
int rightN(int n)
{
	int a;
	while(n>0)
	{
		a=n%10;
		n/=10;
	}
	return a;
}
int div1(int n, int a)
{
	if(n%a==0)
		return 1;
	else
		return 0;
}
void ve()
{
	for(int i=0; i<=32; i+=1)
	{
		cout <<"-";
	}
	cout << "\n";
}
void check(int n)
{
	if(n==1)
		cout << "Yes";
	else
		cout << "No";
}
void khung(int a, int b)
{  
  cout <<"|\t\t"<< b <<" \t\t|\t\t  "; 
  check(a);
  cout <<"\t\t|\n";
  ve();
}