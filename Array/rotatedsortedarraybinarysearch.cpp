#include <iostream>
using namespace std;
int main()
{
    int n, ans, key, pivot;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    int s = 0, e = n - 1;
    cout << "Enter the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key : ";
    cin >> key;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (a[mid] >= a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        pivot = e;
        mid = s + (e - s) / 2;
    }
    if (a[0] <= key && a[pivot - 1] >= key)
    {
        s = 0;
        e = pivot-1;
        mid = s + (e - s) / 2;
    }
    else if (key < a[0])
    {
        s = pivot;
        e = n - 1;
    }
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            break;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Key Found At Index : " << ans;
}
/*
Output :
Enter the size of array : 5
Enter the array :
6 7 8 1 2
Enter the key : 7
Key Found At Index : 1
*/