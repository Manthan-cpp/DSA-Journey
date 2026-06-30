#include <iostream>
#include <algorithm>
using namespace std;
bool isPossible(int a[], int n, int c, int mid)
{
    int ccount = 1;
    int lastpos = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] - lastpos >= mid)
        {
            ccount++;
            if (ccount == c)
            {
                return true;
            }
            lastpos = a[i];
        }
    }
    return false;
}
int main()
{
    int n, mid, e, c, ans, mx = -1;
    cout << "Enter the number of cows : ";
    cin >> c;
    cout << "Enter the number of stalls : ";
    cin >> n;
    int a[n];
    cout << "Enter the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    sort(a, a + n);
    e = mx;
    int s = 0;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(a, n, c, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Anser is " << ans;
}
/*
Output :
Enter the number of cows : 2
Enter the number of stalls : 5
Enter the array : 
4 2 1 3 6
Anser is 5
*/