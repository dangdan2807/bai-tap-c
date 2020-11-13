#include <iostream>

using namespace std;

string distanceToZ(std::vector<int> a)
{
    vector<string> arr = {"z", "y", "x", "w", "v", "u", "t", "s", "r", "q", "p", "o", "n", "m", "l", "k", "j", "i", "h", "g", "f", "e", "d", "c", "b", "a"};
    string temp = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == -1)
            temp += " ";
        else
            temp += arr[a[i]];
    }
    return temp;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
