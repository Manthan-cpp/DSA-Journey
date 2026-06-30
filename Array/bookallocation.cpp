#include <iostream>
using namespace std;
bool isPossible(int n, int a[], int m, int mid)
{
    int pgsum = 0, stdc = 1;
    for (int i = 0; i < n; i++)
    {
        if (pgsum + a[i] <= mid)
        {
            pgsum += a[i];
        }
        else
        {
            stdc++;
            if (stdc > m || a[i] > mid)
            {
                return false;
            }
            pgsum=0;
            pgsum += a[i];
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
    cout << "Enter the number of students : ";
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
        if (isPossible(n, a, m, mid))
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
    cout << "Answer is " << ans;
}
/*
Output :
Enter the size : 4
Enter the number of students : 2
Enter the array :
10 20 30 40
Answer is 60
*/
