#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string erase(string &s, string part)
{
    while (s.length() != 0 && s.find(part)<s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s,part="";
    int i=0;
    cout<<"Enter a string : \n";
    getline(cin, s);
    while (i<s.length())
    {
        if (s[i] == s[i + 1])
        {
            part = part + s[i] + s[i + 1];
            s = erase(s, part);
            part="";
            i=0;
        }
        else{
            i++;
        }
    }
    cout <<"Final Output : "<< s;
}
/*
Output :
Enter a string : 
noonoom
Final Output : m
*/