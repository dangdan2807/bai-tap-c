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
	int n = strlen(s);
	for(int i = 0; i<n; i++)
	{
		if(s[0] == ' ')
		{
			for(int j = 0; j < n; j++ )
				s[j] = s[j+1];
			i--;
		}
		else if(s[i] == ' ' && s[i+1] == ' ')
		{
			for(int j= i; j<n; j++)
				s[j] = s[j+1];
			i--;
		}
		else if(s[i] == ' ' && s[i+1] == '\0')
		{
			s[i] = '\0';
		}
	}
}