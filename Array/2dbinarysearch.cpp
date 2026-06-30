#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    int n, t, m;
    cout << "Enter the rows and coloumns of the array respectively : ";
    cin >> n >> m;
    int a[n * m];
    cout << "Enter the array : \n";
    for (int i = 0; i < (n * m); i++)
    {
        cin >> a[i];
    }
    cout << "Enter the target : ";
    cin >> t;
    int start = 0, end = n * m - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (a[mid] == t)
        {
            cout << "Target found at index " << (mid / m) << mid % m;
            break;
        }
        else if (t > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
}
/*
Output :
Enter the rows and coloumns of the array respectively : 3 3 
Enter the array : 
1 2 3
4 5 6
7 8 9
Enter the target : 9
Target found at index 22
*/