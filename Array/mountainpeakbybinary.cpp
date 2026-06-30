#include <iostream>
using namespace std;
void peak()
{
    int n, s = 0,  key, mid, ans = 0, ans2 = 0, f = 0;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter the mountain array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int e = n - 1;
    mid = s + (e - s) / 2;
    while (s < e)
    {
        if (a[mid] < a[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout<<"Peak Element : "<<a[s];
}
int main()
{
    peak();
}
/*
Output :
Enter the number of elements : 5 
Enter the mountain array :
1 2 3 4 1
Peak Element : 4
*/
