#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int findLength(char st[])
{
    int l = 0;
    for (int i = 0; st[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}
bool checkPalindrome(char str[], int l)
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
    char st[100];
    int l;
    cout << "Enter a word : ";
    cin >> st;
    l = findLength(st);
    if (checkPalindrome(st, l))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}
/*
Output :
Enter a word : BATHTAB
Palindrome
*/
