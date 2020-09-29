#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dem_tu_chuoi(char s[], int n);
void tu_dainhat(char s[], int dodai[], int vitri[]);


int main()
{
	int a[100];
	int b[100];
	char s[] = "dep trai vo dich vu tru";
	cout <<"Chuoi la:\n" <<s <<"\n";
	tu_dainhat(s, a, b);
	return 0;
}


int dem_tu_chuoi(char s[], int n)
{
	int dem = 0;
	for(int i = n; i < strlen(s); i++)
	{
		if(s[i] != ' ')
		{
			dem++;
		}
		else
			break;
	}
	return dem;
}
void tu_dainhat(char s[], int dodai[], int vitri[])
{
	int so_tu = strlen(s);
	int j=0;
	for(int i=0;  i < so_tu; i++)
	{
		if(s[i] == ' ')
		{
			vitri[j] = i+1;
			dodai[j] = dem_tu_chuoi(s, i+1);
			j++;
		}
	} 
	
	int temp, max;
	for(int i= 1; i<j; i++)
	{
		if(max < dodai[i])
		{
			max = dodai[i];
			temp = vitri[i];
		}
	}
	for(int i = temp; i<= max+temp -1; i++)
		cout <<s[i];
}