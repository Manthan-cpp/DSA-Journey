#include <iostream>
using namespace std;
int nofOcc()
{
    int n, s, e, key, mid, ans = 0, ans2 = 0, f = 0;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key : ";
    cin >> key;
    s = 0;
    e = n - 1;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    s = 0;
    e = n - 1;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans2 = mid;
            s = mid + 1;
        }
        else if (key < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Number Of Occurence : " << ans2-(ans-1) << endl;
    
}
int main()
{
    nofOcc();
}
/*
Output :
Enter the number of elements : 7
Enter the array :
1 2 2 3 3 3 4
Enter the key : 3
Number Of Occurence : 3
*/