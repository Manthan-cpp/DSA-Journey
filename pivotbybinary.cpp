#include <iostream>
using namespace std;
int main()
{
    int n, ans;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    int s = 0, e = n - 1;
    cout << "Enter the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        // if (a[mid] < a[mid - 1] && a[mid] < a[mid + 1])
        // {
        //     ans = a[mid];
        //     break;
        // }
        if (a[mid] >= a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Pivot : " << a[e];
}
/*
Output :
Enter the size of array : 6
Enter the array :
7 8 1 2 4 5   
Pivot : 1
*/