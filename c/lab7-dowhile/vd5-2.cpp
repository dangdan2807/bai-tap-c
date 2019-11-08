#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float lai, sotien_can, sotien_bandau;
	int dem=0;
	printf("Nhap so tien ban dau: ");
	scanf("%f", &sotien_bandau);
	printf("Nhap so tien can nhan: ");
	scanf("%f", &sotien_can);
	printf("Nhap lai suat ngan hang: ");
	scanf("%f", &lai);
	while(sotien_bandau<=sotien_can)
	{
			sotien_bandau+=sotien_bandau*lai/100;
			dem+=1;
	}
	printf("So thang gui toi thieu la: %d", dem);
	return 0;
}
