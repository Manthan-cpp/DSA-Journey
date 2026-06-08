#include <iostream>
#include <string>
using namespace std;
void findLength(char name[])
{
    int c = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        c++;
    }
    cout << "Length = " << c;
}
int main()
{
    int i;
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    findLength(name);
}
/*
Output :
Enter your name : Superfragilisticexpalidocious
Length = 29
*/      