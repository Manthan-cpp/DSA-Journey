#include <iostream>
using namespace std;
void Pos()
{
    int n, s, e, key, mid, f = 0;
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
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "First Position : " << i << endl;
            break;
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        if (a[i] == key)
        {
            cout << "Last Position : " << i << endl;
            break;
        }
    }
}
int main()
{
    Pos();
}
/*
Output :
Enter the number of elements : 7
Enter the array :
1 2 3 3 3 4 5  
Enter the key : 3
First Position : 2
Last Position : 4
*/
