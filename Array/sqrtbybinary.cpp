#include <iostream>
using namespace std;
int main()
{
    int n, e, s;
    cout << "Enter the number : o";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    e = n - 1;
    s = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] * a[mid] > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "square Root : " << a[e];
}
/*Output :
Enter the number : 121
square Root : 11
*/