#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int findLength(char name[])
{
    int c = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void stringRev(char name[], int n)
{
    int s=0,e=n-1;
    cout << "Reversed String : ";
    while(s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout << name;
}
int main()
{
    int l;
    char name[100];
    cout << "Enter your name : ";
    cin >> name;
    l = findLength(name);
    stringRev(name, l);
}
/*
Output :
Enter your name : Superfragilisticexpaalidocious
Reversed String : suoicodilaapxecitsiligarfrepuS
*/