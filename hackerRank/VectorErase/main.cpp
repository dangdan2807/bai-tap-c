#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, s, e;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cin >> x;
    cin >> s >> e;
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + s - 1, v.begin() + e -  1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}
