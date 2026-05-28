#include <iostream>
using namespace std;
int main()
{
    int i, n, j, s;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n], c = 0, g = 0;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the sumyou are looking for : ";
    cin >> s;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == s)
            {
                cout << "Pairs : " << a[i] << " + " << a[j] << endl;
            }
        }
    }
}
/*
Output :
Enter the number of elements : 5
Enter the array :
1 2 3 4 5 
Enter the sumyou are looking for : 5
Pairs : 1 + 4
Pairs : 2 + 3
*/