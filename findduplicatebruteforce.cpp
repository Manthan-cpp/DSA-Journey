#include <iostream>
using namespace std;
int duplicate()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n], c = 0, g = 0;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[j] == a[i])
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << "Duplicate Number : " << a[j] << endl;
            break;
        }
        c = 0;
    }
}
int main()
{
    duplicate();
}
/*
Output :
Enter the number of elements : 5
Enter the array :
1 2 3 4 2
Duplicate Number : 2
*/