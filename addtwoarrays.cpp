#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> rev(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
    int n, m;
    cout << "Enter the size of first array : ";
    cin >> n;
    cout << "Enter the size of second array : ";
    cin >> m;
    int a1[n], a2[m];
    vector<int> v;
    cout << "Enter the first array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    cout << "Enter the second array : \n";
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    int carry = 0, i = n - 1, j = m - 1, sum = 0;
    while (i >= 0 && j >= 0)
    {
        sum = a1[i] + a2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = a1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = a2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v.push_back(sum);
        j--;
    }
    v = rev(v);
    cout << "Sum of both arrays : \n";
    for (int x : v)
    {
        cout << x;
    }
}
/*
Output :
Enter the size of first array : 3
Enter the size of second array : 2
Enter the first array :
7 9 8
Enter the second array :
2 6
Sum of both arrays :
824
*/