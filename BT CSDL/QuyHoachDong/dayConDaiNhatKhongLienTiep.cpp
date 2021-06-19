#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int v[100] = {6, 9, 12, 12, 1, 4, 13, 3, 12, 13};
    int result[100];
    int arrTruyVet[100];
    srand(time(NULL));

    // NHAP DANH SACH
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     v[i] = 1 + rand() % 15;
    //     // cin >> v[i];
    // }

    result[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int lMax = 0;
        int jmax = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[i] > v[j])
                if (result[j] > lMax)
                {
                    lMax = result[j];
                    jmax = j;
                }
        }
        result[i] = lMax + 1;
        arrTruyVet[i] = jmax;
    }

    // XUAT DANH SACH
    cout << "Array" << "\t" << "Result" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << "\t";
    }
    cout << endl;

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (result[i] > result[max])
            max = i;
    }
    cout << "\nDoi dai nhat la: " << max << endl;

    while (true)
    {
        int i = max;
        cout << v[i] << " ";
        max = arrTruyVet[i];
        if(arrTruyVet[i] == 0)
        {
            cout << v[i] << " ";
            break;
        }
    }
    return 0;
}