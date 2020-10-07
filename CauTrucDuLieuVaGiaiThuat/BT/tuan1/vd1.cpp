#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void NhapMang(int a[], int n);
void PhatSinhMang(int a[], int n);
void XuatMang(int a[], int n);
int GhiMangVaoFile(char* filename, int a[], int n);
int DocFileTextVaoMang(char* filename, int a[], int &n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[100];
    //NhapMang(arr, n);
    PhatSinhMang(arr, n);
    XuatMang(arr, n);
    
    int b[100];
    char address[] = "text1.txt";
    GhiMangVaoFile(address, arr, n);
    DocFileTextVaoMang(address, b, n);
    cout << "xuat mang b\n";
    XuatMang(b, n);
    return 0;
}

void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}

void PhatSinhMang(int a[], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        a[i] = 1 + rand() % (100 - 1 + 1);
}

void XuatMang(int a[], int n)
{
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << "a[" << i <<"]= " << a[i] << "\n";
}

int GhiMangVaoFile(char* filename, int a[], int n)
{
	FILE* f = fopen(filename, "w");
	if(!f)
		return 0;
	for(int i = 0; i < n; i++)
		fprintf(f, "%d\t", a[i]);
		
	fclose(f);
	return 1;
}

int DocFileTextVaoMang(char* filename, int a[], int &n)
{
	FILE* f = fopen(filename, "r");
	if(!f)
		return 0;
	int i = 0;
	while(!feof(f))
	{
		fscanf(f, "%d", &a[i]);
		i++;
	}
	n = i;
}