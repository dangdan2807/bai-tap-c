#include <iostream>
#include <cstring>
using namespace std;

void PrintNKiTu(char s[], int n, int k);

int main()
{
	char s[] = "dep trai vo dich vu tru";
	int n, k;
	cout << "chuoi la: " << s << endl;
	cout << "len(s) = " << strlen(s) << endl;
	PrintNKiTu(s, n, k);
	return 0;
}

void PrintNKiTu(char s[], int n, int k)
{
	int i;
	do
	{
		printf("Nhap vi tri bat dau 0 <= k < len(s) : ");
		scanf("%d", &k);
	} while (k < 0 || k >= strlen(s));

	do
	{
		printf("Nhap chieu dai can in n (k+n < len(s) : ");
		scanf("%d", &n);
	} while (k + n > strlen(s));

	for (i = k; i < k + n; i++)
		printf("%c", s[i]);
}