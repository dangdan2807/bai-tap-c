﻿#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int min=5e4;
	int N, t50=5e4, t100=1e5, t200=2e5, t500=5e5;
	// 5e4 = 50000
	int d500=0, d200=0, d100=0, d50=0;
	cout <<"Menh gia tien phai la so noi N cua 50000 \n";
	cout <<"Nhap menh gia: ";
	do
	{
		cin >> N;
	}while(N%min!=0);
	for(int i=min;i<=N;i+=min)
	{
		switch(i)
		{
			case 50000: d50=N/t50;
				printf("Phuong an 1: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000 \n", d50, d100, d200, d500);break;
			case 100000: d100=N/t100;
				printf("Phuong an 2: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000 \n", d50, d100, d200, d500);break;
			case 200000: d200=N/t200;
				printf("Phuong an 3: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000 \n", d50, d100, d200, d500);break;
			case 500000: d500=N/t500;
				printf("Phuong an 4: %d to 50000 + %d to 100000 + %d to 200000 + %d to 500000 \n", d50, d100, d200, d500);break;
		}
		d50=d100=d200=d500=0;
	}
	return 0;
}
