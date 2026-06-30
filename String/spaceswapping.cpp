#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string spaceSwap(string &s)
{
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            str = str + "@40";
        }
        else
        {
            str = str + s[i];
        }
    }
    return str;
}
int main()
{
    string s, str;
    cout << "Enter the string : \n";
    getline(cin, s);
    int l = s.length();
    str = spaceSwap(s);
    cout << "Space Swapped with @40 displays :\n";
    cout << str;
}
/*
Output :
Enter the string : 
My Name Is Dogge
Space Swapped with @40 displays :
My@40Name@40Is@40Dogge
*/