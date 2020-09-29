#include <iostream>
#include <cstring>
using namespace std;

void hoanvi_chuoi(char &x, char &y);
void xoa_khoangcach(char s[]);

int main()
{
	char s[] = " dep trai vo dich vu tru ";
	cout <<"Chuoi truoc khi xoa khoang trang:\n" <<s <<"\n";
	xoa_khoangcach(s);
	cout <<"\nChuoi sau khi xoa khoang trang:\n" <<s;
	return 0;
}

void hoanvi_chuoi(char &x, char &y)
{
	char temp;
	temp = x;
	x = y;
	y = temp;
}
void xoa_khoangcach(char s[])
{
	// hàm đếm kí tự chuỗi strlen();
	int so_kitu = strlen(s);
	for(int i= so_kitu; i >= 0; i--)
	{
		if(s[i] == ' ')
		{
			for(int j= i+1; j <=so_kitu; j++)
				hoanvi_chuoi(s[j-1], s[j]);
		}
	}
}