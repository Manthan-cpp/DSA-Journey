#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter your string :\n";
    getline(cin, s);
    int c = 1;
    cout << "Compressed String : \n";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            if (c > 1)
            {
                cout << s[i] << c << " ";
            }
            else
            {
                cout << s[i] << " ";
            }
            c = 1;
        }
    }
}
/*
Output ;
Enter your string :
abbcccddddfffff
Compressed String : 
a b2 c3 d4 f5
*/