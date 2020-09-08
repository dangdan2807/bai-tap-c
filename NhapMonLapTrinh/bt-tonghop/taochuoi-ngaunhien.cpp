#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int n;
	cout <<"Nhap do dai cua chuoi muon tao: ";
	cin >> n;
	string key;
	string box = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < n; i++)
    {
        key.push_back(box[rand() % box.length()]);
    }
    	key[box.length()] = '\0';
	cout <<"Key la: " <<key <<endl;
	return 0;
}
