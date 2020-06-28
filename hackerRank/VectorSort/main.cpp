#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> vtor;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vtor.push_back(temp);
    }
    sort(vtor.begin(), vtor.end());
    for(int i = 0; i < n; i++)
    {
        cout << vtor.at(i) << " ";
    }
    return 0;
}
