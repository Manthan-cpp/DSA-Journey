#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void rev(string &st, int s, int e)
{
    while (s < e)
    {
        swap(st[s], st[e]);
        s++;
        e--;
    }
    // return st;
}
int main()
{
    string st;
    cout << "Enter Your String : \n";
    getline(cin, st);
    int l = st.length();
    int s = 0, e = l - 1;
    // rev(st,s,e); the whole string is reversed if used idol, else it will be reversed leaving the words as it is.
    for (int i = 0; i <= st.length(); i++)
    {
        if (st[i] == ' ' || st[i] == '\0')
        {

            rev(st, s, i - 1);
            s = i + 1;
        }
    }
    cout << "Reversed Word String : " << endl
         << st;
}
/*
Output :
Enter Your String : 
My Name Is Dogge
Reversed Word String : 
yM emaN sI eggoD
*/