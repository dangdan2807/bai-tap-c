#include <iostream>
using namespace std;

void standard(char s[]);


int main()
{
	char s[] = "  dep  trai  vo  dich  vu  tru  ";
	cout <<"Chuoi ban dau la:\n'" <<s <<"'\n\n";
	cout <<"Chuoi sau khi xoa khoang trang dau va cuoi:\n";
	standard(s);
	cout <<"'" <<s <<"'";
	return 0;
}


void standard(char s[])
{
	int i=0, j = strlen(s) ;
	while (s[i]==' ')i++;
	while (s[j-1]==' ')j--;
	s[j]='\0';
	for(j=0;i<strlen(s);i++)
	{
		if((s[i]==' ')&&(s[i+1]==' '))
			continue;
			s[j]=s[i];
			j++;
	}
    s[j]='\0';
}