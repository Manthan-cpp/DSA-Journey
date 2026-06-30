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
    for (int j = 0; j < n; j++)
    {
        if (j % 2 != 0 && j != 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cin >> a[i][j];
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cin >> a[i][j];
            }
        }
    }
    cout << "Wavy array : \n";
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
Wavy array : 
1 6 7 
2 5 8 
3 4 9 
*/