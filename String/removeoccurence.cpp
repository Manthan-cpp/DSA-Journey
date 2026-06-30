#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string occurrence(string &s, string str)
{
    while (s.length() != 0 && s.find(str) < s.length())
    {
        s.erase(s.find(str), str.length());
    }
    return s;
}
int main()
{
    string s, str;
    cout << "Enter the string : \n";
    getline(cin, s);
    cout << "Enter the part you want to erase : \n";
    getline(cin, str);
    s = occurrence(s, str);
    cout << "New String : " << s;
}
/*
Output :
Enter the string : 
dabcaabcbabc
Enter the part you want to erase : 
abc
New String : dab
*/