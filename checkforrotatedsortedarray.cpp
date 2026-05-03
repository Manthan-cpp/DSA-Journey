#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void check(vector<int> a, int n)
{
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            c++;
        }
    }
    if (a[0] < a[n - 1])
    {
        c++;
    }
    if (c <= 1)
        cout << "Sorted and rotated.\n";
    else
        cout << "Not sorted and rotated.";
}
int main()
{
    int n, i, t;
    cout << "Enter the number of elements : ";
    cin >> n;
    int temp[n];
    vector<int> a;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    check(a, n);
}
/*
Output :
Enter the number of elements : 5
Enter the array :
4 5 1 2 3 
Sorted and rotated
*/
