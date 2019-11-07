#include <iostream>
#include <stdio.h>
using namespace std;
int sum(int n);
int rightN(int n);
int div2(int n);
int div3(int n);
int div5(int n);
int div6(int n);
int div9(int n);
void ve();
int main()
{
  int n, a, b;
  cout <<"Nhập số nguyên không âm n: \n";
  do{
  	cin >> n;
  }while(n<=0);
  cout <<"Tổng của các số n là: " << sum(n)<< "\n";
  cout <<"Chữ số hàng đơn vị của số n là: " << rightN(n)<< "\n";
  div2(n);
  div3(n);
  div5(n);
  div6(n);
  div9(n);
  ve();
  ve();
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
	while(n>0)
	{
		n%=10;
		n/=10;
	}
	return n;
}
int div2(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
int div3(int n)
{
	if(n%3==0)
		return 1;
	else
		return 0;
}
int div5(int n)
{
	if(n%5==0)
		return 1;
	else
		return 0;
}
int div6(int n)
{
	if(n%6==0)
		return 1;
	else
		return 0;
}
int div9(int n)
{
	if(n%9==0)
		return 1;
	else
		return 0;
}
void ve()
{
	for(int i=0; i<=10; i+=1)
	{
		cout <<"-";
	}
}
