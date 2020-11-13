#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool swapCharacters(string str1, string str2)
{
    
    if (str1.size() != str2.size() || (str1.size() == 1 || str2.size() == 1)) return false;
    
    vector<int> arr;
    
    if(str1 == str2)
    {
        int x , sum = 0;
        for(char i = 'a' ; i <= 'z' ; i++)
        {
            x = 0;
            for (int j = 0; j < str1.size(); j++)
            {
                if (str1[j] == i) x++;
            }
            if (x!= 0 && x%2==0 ) return true;
            sum = sum + x;
            if (sum == str1.size()) break;
        }
    }
    
    for(int i = 0; i < str1.size() ; i++)
    {
        if (str1[i] != str2[i]) arr.push_back(i);
        if(arr.size() == 2)
        {
            swap(str1[arr[0]] , str1[arr[1]]);
            if (str1 == str2) return true;
            else return false;
        }
    }
    
    return false;
}

int main(int argc, char const *argv[])
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << swapCharacters(str1, str2) << endl;
    return 0;
}
