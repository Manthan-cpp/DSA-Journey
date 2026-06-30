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
    for (int i = 0; i < n; i++)
    {
        bool swapp = false;
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapp = true;
            }
        }
        if (swapp == false)
        {
            break;
        }
    }
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
/*
Output :
Enter the number of elements : 7
Enter the array :
7 4 6 3 1 5 2
Sorted Array :
1 2 3 4 5 6 7
*/