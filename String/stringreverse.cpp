#include <iostream>
#include <string>
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
    cout << "Reversed String : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << name[i];
    }
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