#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

// 8/10 case
// 2004
string reverseString(string str, int k)
{
    string temp = str;
    if (str.length() == 0)
        return "";
    int len = str.length();
    for (int i = 0; i < len; i += k * 2)
    {
        reverse(temp.begin() + i, temp.begin() + i + k);
        if (i + k * 2 > len)
            break;
    }
    return temp;
}

string reverseString2(string str, int k)
{
    int n = str.length();
    string temp = str;
    for (int i = 0; i < n; i++)
    {
        swap(temp[i], temp[i + k]);
        if (i == k - 1)
            i += k;
    }
    return temp;
}

int main(int argc, char const *argv[])
{
    string str = "osjxapwnyzerinsugboiipgaeyzaqumibiakvxhqxowaohxsasglifywmszxtisrepmbqtrvwdnahmicksoqstomiuztpzkekldv";
    // cin >> str;
    int n = 64;
    // cin >> n;
    string kq = "rsitxzsmwyfilgsasxhoawoxqhxvkaibimuqazyeagpiiobgusnirezynwpaxjsoepmbqtrvwdnahmicksoqstomiuztpzkekldv";
    string kq2 = reverseString2(str, 64);
    cout << kq.compare(kq2) << endl;
    //  << kq << endl << kq2 << endl;
    // string a = "";
    // cout << a.length();
    return 0;
}

int countWord(string s1, string word)
{
    int tong = 0;
    int dem = 0;
    int j = 0;
    int k;
    int n1 = s1.length();
    int n2 = s2.length();
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] == s2[0])
        {
            k = i;
            while (s2[j] == s1[k])
            {
                if (k < n1)
                {
                    k++;
                }
                else if (s2[j] == s1[k] && k >= n1)
                {

                    break;
                }
                j++;
                dem++;
            }
            if (dem == n2)
            {
                tong++;
                dem = 0;
            }
            else
            {
                dem = 0;
            }
            k = i;
            j = 0;
        }
    }
    return tong;
}