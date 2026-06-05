#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string eliminate(char st[])
{
    string s;
    for (int i = 0; st[i] != '\0'; i++)
    {
        if ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z') || (st[i] >= '0' && st[i] <= '9'))
        {
            s.push_back(st[i]);
        }
    }
    return s;
}
int findLength(string s)
{
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}
bool checkPalindrome(string str, int l)
{
    int e = l - 1, s = 0;
    while (s < e)
    {
        if (str[s] == str[e])
        {
            e--;
            s++;
        }
        else
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    char str[100];
    string s;
    cout << "Enter Your Phrase : " << endl;
    cin >> str;
    int l;
    s = eliminate(str);
    l = findLength(s);
    if (checkPalindrome(s, l))
    {
        cout << "Palindrome Phrase !";
    }
    else
    {
        cout << "Not Palindrome !";
    }
}
/*
Output :
Enter Your Phrase :
A Man, A Pan, Canal: Panama
Palindrome Phrase !
*/