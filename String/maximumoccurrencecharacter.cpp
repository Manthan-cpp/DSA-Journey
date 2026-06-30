#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
char maxocc(string s)
{

    int arr[26] = {0}, num;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        num = 0;
        if ('a' <= s[i] && s[i] <= 'z')
        {
            num = ch - 'a';
        }
        else if ('A' <= s[i] && s[i] <= 'Z')
        {
            num = ch - 'A';
        }
        arr[num]++;
    }
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char final = 'a' + ans;
    return final;
}
int main()
{
    string s;
    cout << "Enter a string : \n";
    getline(cin, s);
    char c = maxocc(s);
    cout << "Most Occurred :\n";
    cout << c;
}
/*
Output :
Enter a string : 
testcases
Most Occurred :
s
*/