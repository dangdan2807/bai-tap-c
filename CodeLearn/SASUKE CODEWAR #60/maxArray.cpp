#include <iostream>
#include <vector>

using namespace std;

int maxArray(vector<int> arr)
{
    int maxIndex = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxIndex != i && arr[maxIndex] < 2 * arr[i])
        {
            return -1;
        }
    }
    return maxIndex;
}

int main(int argc, char const *argv[])
{
    vector<int> arr;
    int n, temp;
    cout << "nhap so luong phan tu mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp; 
        arr.push_back(temp);
    }
    
    cout << maxArray(arr);
    return 0;
}
