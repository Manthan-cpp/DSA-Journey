#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    int n, target;
    cout << "Enter the size of the 2d array : ";
    cin >> n;
    int a[n][n];
    cout << "Enter the array : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the key : ";
    cin >> target;
    int rowi = 0, coli = n - 1;
    while (rowi < n && coli >= 0)
    {
        int e = a[rowi][coli];
        if (e == target)
        {
            cout << "Found at " << rowi << coli;
            return 1;
        }
        else if (e < target)
        {
            rowi++;
        }
        else if (e > target)
        {
            coli--;
        }
    }
    cout << "Target Not Found !\n";
}
/*
Output :
Enter the size of the 2d array : 3
Enter the array : 
1 2 3
4 5 6
7 8 9
Enter the key : 3
Found at 02
*/
