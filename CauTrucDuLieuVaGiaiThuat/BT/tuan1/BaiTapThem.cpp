#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

typedef struct WORD
{
    char name[256];
    char meaning[521];
} word;

void NhapTuDien(word arr[], int n);
int DocFileTextVaoMang(word a[], int &n);
string LinearSearch(word a[], int n, char x[]);
string BinarySearch(word arr[], int left, int right, char x[]);

int main()
{
    word arr[100];
    int n = 14;
    char x[256];
    cout << "nhap tu can tim: ";
    cin.getline(x, 256);
    int check = DocFileTextVaoMang(arr, n);
    if(check == 0)
    {
        cout << "Error opening";
        return 0;
    }
    // string kq = LinearSearch(arr, n, x);
    string kq = BinarySearch(arr, 0, n, x);
    cout << "tu " << x << " co nghia la: " << kq;
    return 0;
}

int DocFileTextVaoMang(word a[], int &n)
{
    char temp;
    fstream f;
    f.open("TuDien.txt", ios_base::in);
    if (f.fail())
    {
        return 0;
    }
    int i = 0;
    while (!f.eof())
    {
        f.getline(a[i].name, 256, '|');
        f.getline(a[i].meaning, 512, '\n');
        i++;
    }
    n = i;
    return 1;
}

string LinearSearch(word a[], int n, char x[])
{
    int i = 0;
    while (i < n && strcmp(a[i].name, x) != 0)
        i++;
    if (i < n)
        return a[i].meaning;
    return "khong tim thay";
}

string BinarySearch(word arr[], int left, int right, char x[])
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (strcmp(arr[mid].name, x) == 0)
            return arr[mid].meaning;
        else if (strcmp(arr[mid].name, x) < 0)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return "khong tim thay";
}
