#include <iostream>
using namespace std;
void binarySearch()
{
    int n, s, e, key, mid,f=0;
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
    mid = (s + e) / 2;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            cout << "Found at index "<<mid;
            f=1;
            break;
        }
        else if (key > a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    if(f==0)
    {
        cout<<"Not Found \n";
    }
}
int main()
{
    binarySearch();
}
/*
Output :
Enter the number of elements : 10
Enter the array :
1 2 3 4 5 6 7 8 9 10
Enter the key : 7
Found at index 6
*/