#include <iostream>
#include <cstring>
using namespace std;

void DelSpace(char s[]);

int main()
{
	char s[] = " dep trai vo dich vu tru ";
	cout <<"Chuoi truoc khi xoa khoang trang:\n" <<s <<"\n";
	DelSpace(s);
	cout <<"\nChuoi sau khi xoa khoang trang:\n" <<s;
	return 0;
}


void DelSpace(char s[])
{
	int i, j;
	for (i = 0, j = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
			continue;
		s[j] = s[i];
		j++;
	}
	s[j] = '\0';
}