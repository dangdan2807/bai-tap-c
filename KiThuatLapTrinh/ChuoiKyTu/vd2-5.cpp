#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void MaxWord(char s[]);

int main()
{
	int a[100];
	int b[100];
	char s[] = "dep trai vo dich vu tru";
	cout << "Chuoi la: "
		 << s << endl;
	MaxWord(s);
	return 0;
}

void MaxWord(char s[])
{
	int i, j, l = 0, iMax = 0, lMax = 0;
	j = strlen(s);
	s[j] = ' ';
	s[j + 1] = '\0';
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
		{
			if (l > lMax)
			{
				lMax = l;
				iMax = i - lMax;
			}
			l = 0;
		}
		else
			l++;
	}
	printf("Tu dai nhat la : ");
	for (i = iMax; i < iMax + lMax; i++)
		printf("%c", s[i]);
	printf("\nco chieu dai la %d ky tu", lMax);
}