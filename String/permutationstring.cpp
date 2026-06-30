#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1, s2;
    int count1[26] = {0}, count2[26] = {0};
    cout << "Enter the first string :\n";
    getline(cin, s1);
    cout << "Enter the second string :\n";
    getline(cin, s2);
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int windowsize = s1.length(), i = 0;
    while (i < windowsize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (check(count1, count2))
    {
        cout << "Permutation Found \n";
        return true;
    }
    for (int i = windowsize; i < s2.length(); i++)
    {
        int index1 = s2[i] - 'a';
        int oldChar = s2[i - windowsize] - 'a';
        count2[index1]++;
        count2[oldChar]--;

        if (check(count1, count2))
        {
            cout << "Permutation Found \n";
            return true;
        }
    }
    cout << "Permutation Not Found ";
}
/*
Output :
Enter the first string :
abc
Enter the second string :
ifoundacabforhome
Permutation Found
*/