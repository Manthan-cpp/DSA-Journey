#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0, e = n - 1, mid;
    mid = s + (e - s) / 2;
    while (s <= e)
    {
        swap(a[s], a[e]);
        s = s + 1;
        e = e - 1;
    }
    cout << "Reversed  Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
/*
Output :
Enter the number of elements : 5
Enter the array :
1 2 3 4 5 
Reversed  Array : 
5 4 3 2 1 
*/