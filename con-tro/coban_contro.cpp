#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a=10;
	int *b= &a;
	int c= *&a;
	//gán địa chỉ của biến a trên thanh RAM vào  b và in ra b
	cout << b << endl;
	 //in ra địa chỉ mà biến b đang giữ
	cout << "dia chi b dang giu: " << *&b << endl;
	// in ra giá trị tại địa chỉ được lưu trong biến b
	// hay in ra giá trị của được lưu trên thanh RAM mà biến b nhận
	cout << "b= " << *b << endl;
	//gán giá trị tại địa chỉ của biến a nằm trên thanh RAM cho c
	cout << c << endl;// a=c;
	//
	a=20;
	//lúc này nếu biến a=20 thì biến b=20 vì biến b đàn giữ địa chỉ biến a tại vùng nhớ trên thanh RAM
	cout << "b=" << *b << endl;
	*b=30;
	//ngoài ra nếu thay đổi giá trị tại địa chỉ mà biến b đang giữ thì nó cũng thay đổi biến a theo vì b đang giữ địa chỉ của biến a tại vùng nhớ
	cout <<"a= " << a << endl;
	//biến c không đổi vì nó chỉ giữ giá trị của địa chỉ biến a cũng như c=a
	cout << "c= " << c <<endl;
	return 0;
}
