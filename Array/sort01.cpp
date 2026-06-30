#include <iostream>
using namespace std;
void sort01()
{
    int i, n, j, s;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n], c = 0, g = 0;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    i = 0;
    j = n - 1;
    while (i < j)
    {
        while (a[i] == 0 && i < j)
        {
            i++;
        }
        while (a[j] == 1 && i < j)
        {
            j--;
        }
        if (a[i] == 1 && a[j] == 0)
        {
            swap(a[i], a[j]);
        }
    }
    cout<<"Sorted Array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    sort01();
}
/*
Output :
Enter the number of elements : 7
Enter the array :
1 0 0 0 1 1 0
Sorted Array : 
0 0 0 0 1 1 1
*/