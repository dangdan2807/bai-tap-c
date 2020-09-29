#include <iostream>
#include <cstring>
using namespace std;

void trich_kitu_dau(char s[], int n);
void trich_kitu_cuoi(char s[], int n);


int main()
{
	char s[] ="dep trai vo dich vu tru";
	int n = strlen(s);
	cout  <<"Nhap vi tri (0 < x < " <<n-1 <<"): ";
	int pos;
	do{
		cin >> pos;
		if(pos < 0 || pos >= n)
			cout <<"Du lieu khong hop le, nhap lai: ";
	}while(pos < 0 || pos >= n);
	cout <<"chuoi la: \n" <<s <<"\n\n";
	cout <<"ki tu dau cua tu tai vi tri " <<pos <<" cua chuoi la:\n";
	trich_kitu_dau(s, pos);
	cout <<"\n\nki tu cuoi cua tu tai vi tri " <<pos <<" cua chuoi la:\n";
	trich_kitu_cuoi(s, pos);
	return 0;
}


void trich_kitu_dau(char s[], int n)
{
	if(s[n] == ' ' && s[n] != '\0')
	{
		cout <<s[n+1];
	}
	else if(n == 0 && s[n] != '\0' && s[n] != ' ')
	{
		cout <<s[0];
	}
	else
	{
		for(int i = n; i >= 0; i--)
		{
			if(s[i] == ' ' && s[i] != '\0')
			{
				cout <<s[i+1];
				break;
			}
			else if(i == 0 && s[i] != '\0' && s[i] != ' ')
			{
				cout <<s[0];
				break;
			}
		}
	}
}

void trich_kitu_cuoi(char s[], int n)
{
	for(int i = n; i >= 0; i++)
	{
		if(s[i] == ' ' && s[i] != '\0')
		{
			cout <<s[i-1];
			break;
		}
	}
}