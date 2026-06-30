#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    int n;
    cout << "Enter the size of the 2d array : ";
    cin >> n;
    int a[n][n];
    cout << "Enter the array : \n";
    int total = n * n, startrow = 0, startcol = n - 1, endrow = n - 1, endcol = 0, count = 0;
    while (count < total)
    {
        for (int i = endcol; count < total && i <= startcol; i++)
        {
            cin >> a[startrow][i];
            count++;
        }
        startrow++;
        for (int i = startrow; count < total && i <= endrow; i++)
        {
            cin >> a[i][startcol];
            count++;
        }
        startcol--;
        for (int i = startcol; count < total && i >= endcol; i--)
        {
            cin >> a[endrow][i];
            count++;
        }
        endrow--;
        for (int i = endrow; count < total && i >= startrow; i--)
        {
            cin >> a[i][endcol];
            count++;
        }
        endcol++;
    }
    cout << "Spiral Array : \n";
    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < n; i++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
/*
Output :
Enter the size of the 2d array : 3
Enter the array : 
1 2 3
4 5 6 
7 8 9 
Spiral Array : 
1 2 3 
8 9 4 
7 6 5
*/