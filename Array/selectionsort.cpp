#include <iostream>
#include <algorithm>
using namespace std;
void selSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int a[n];
    cout << "Enter the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selSort(a, n);
}
/*
Output :
Enter the size : 7
Enter the array : 
7 4 8 4 7 9 3  
Sorted Array : 3 4 4 7 7 8 9
*/