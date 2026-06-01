#include <iostream>
using namespace std;
void swap()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n];
    cout <<"Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            int b = a[i];
            a[i] = a[i + 1];
            a[i + 1] = b;
        }
        else
        {
            break;
        }
    }
    cout << "Swapped Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    swap();
}
/*
Output :
Enter the number of elements : 5
Enter the array :
1 2 3 4 5
Swapped Array : 2 1 4 3 5 
*/