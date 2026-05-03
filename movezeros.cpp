#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> moveZeros(vector<int> a, int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] != 0)
        {
            swap(a[j], a[i]);
            i++;
        }
    }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         if (a[j] == 0 && a[j + 1] != 0)
    //         {
    //             swap(a[j], a[j + 1]);
    //         }
    //     }
    // }
    return a;
}
int main()
{
    int n, temp;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> a;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    a = moveZeros(a, n);
    cout << "Updated array : \n";
    for (int x : a)
    {
        cout << x << " ";
    }
}
/*
Output :
Enter the number of elements : 5
Enter the array :
0 2 1 3 0
Updated array :
2 1 3 0 0
*/