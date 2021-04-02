#include <iostream>
#include <cstring>
using namespace std;

void CountWord(char s[]);

int main()
{
	char s[] = "dep trai  vo dich vu tru";
	cout << "Chuoi ban dau: \n"
		 << s << endl;
	CountWord(s);
	return 0;
}

void CountWord(char s[])
{
	int i = 0, j = strlen(s);
	while (s[i] == ' ')
		i++;
	while (s[j - 1] == ' ')
		j--;
	s[j] = '\0';
	for (j = 0; i < strlen(s); i++)
	{
		if ((s[i] == ' ') && (s[i + 1] == ' '))
			continue;
		s[j] = s[i];
		j++;
	}
	s[j] = '\0';
	int d = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
		{
			d++;
			s[i] = '\n';
		}
	}
	printf("co %d tu  : \n", d + 1);
	puts(s);
}