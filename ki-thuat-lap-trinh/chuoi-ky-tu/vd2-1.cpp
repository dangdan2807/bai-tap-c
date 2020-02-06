#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void in_hoa_ki_tu_dau(char s[]);
void in_thuong_ki_tu_con_lai(char s[]);

int main()
{
	char s[100] = "dEP tRAI vO dICH vU tRU";
	cout <<"\tDoi ki tu dau thuong sang in hoa, cac ki tu con lai tu in hoa sang thuong:\n\n";
	cout <<"Chuoi truoc khi doi: " <<s;
	in_hoa_ki_tu_dau(s);
	in_thuong_ki_tu_con_lai(s);
	cout <<"\n Chuoi sau khi doi: " <<s;
	return 0;
}

void in_hoa_ki_tu_dau(char s[])
{
	int n = strlen(s);
	for(int i = 0; i < n; i++)
	{
		//chuyen ki tu in sang thuong
		if(s[i] != ' ' && s[i] >= 65 && s[i] <= 90)
			s[i] += (char)32;
	}
}

void in_thuong_ki_tu_con_lai(char s[])
{
	int n = strlen(s);
	for(int i = 0; i < n; i++)
	{
		 //chuyen ki tu thuong sang in
		if(s[i-1] == ' ' && s[i] >= 97 && s[i] <= 122 || s[0] != ' ' && s[0] >= 97 && s[0] <= 122)
			s[i] -= (char)32;
	}
}