#include <iostream>
#include <cstring>
using namespace std;

int dem_chuoi(char s[]);
void in_tung_kitu(char s[], int n);

int main()
{
	char s[] = "dep trai vo dich vu tru";
	cout <<"Chuoi ban dau: \n" << s;
	int n = dem_chuoi(s);
	cout <<"So ki tu cua chuoi: " <<n;
	cout <<"\nSau ki tach tung ki tu:\n\n";
	in_tung_kitu(s, n);
	return 0;
}

int dem_chuoi(char s[])
{
	int i= 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}
void in_tung_kitu(char s[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(s[i] != ' ')
			cout <<s[i];
		else
			cout <<"\n";
	}
}