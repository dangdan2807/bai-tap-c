#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void proper(char s[]);

int main()
{
	char s[100] = "dEP tRAI vO dICH vU tRU";
	cout << "Doi ki tu dau thuong sang in hoa, cac ki tu con lai tu in hoa sang thuong:\n";
	cout << "Chuoi truoc khi doi: " << s;
	proper(s);
	
	cout << "\nChuoi sau khi doi: " << s;
	return 0;
}

void proper(char s[])
{
	int i;
	s[0] = toupper(s[0]);
	for (i = 1; i < strlen(s); i++)
	{
		// chuyển ký tự đầu thành chữ hoa 
		if (s[i - 1] == ' ')
			s[i] = toupper(s[i]);
		// chuyển ký tự còn lại thành chữ thường
		else
			s[i] = tolower(s[i]);
	}
}