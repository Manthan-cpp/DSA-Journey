#include <iostream>
using namespace std;
bool isPossible(int a[], int m, int n, int mid)
{
    int ptrcount = 1, ptsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (ptsum + a[i] <= mid)
        {
            ptsum += a[i];
        }
        else
        {
            ptrcount++;
            if (ptrcount > m || a[i] > mid)
            {
                return false;
            }
            ptsum = 0;
            ptsum += a[i];
        }
    }
    return true;
}
int main()
{
    int e, s, sum = 0, n, mid, m, ans = -1;
    cout << "Enter the size : ";
    cin >> n;
    int a[n];
    cout << "Enter the number of painters : ";
    cin >> m;
    cout << "Enter the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    e = sum;
    s = 0;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(a, m, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Answer : " << ans;
}
/*
Output :
Enter the size : 6
Enter the number of painters : 3
Enter the array :
12 45 67 89 90 99
Answer : 179
*/