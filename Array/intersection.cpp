#include <iostream>
using namespace std;
int main()
{
    int n, n2;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a1[n], a2[10], c = 0, g = 0;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    cout << "Enter the number of elements of second array : ";
    cin >> n2;
    cout << "Enter the second array :\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }
    cout << "Intersection : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a1[i] == a2[j])
            {
                cout << a2[j] << " ";
                a2[j] = -100000000;
            }
        }
    }
}
/*
Output :
Enter the number of elements : 5
Enter the array :
1 2 5 3 5
Enter the number of elements of second array : 3 
Enter the second array :
5 3 1
Intersection : 1 5 3
*/

