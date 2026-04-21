#include <iostream>
using namespace std;
int main()
{
    int n, i, a = 0, b = 1;
    cout << "Enter the limit." << endl;
    cin >> n;
    cout << a << " " << b << " ";
    for (i = 1; i <= n; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}
/*
Output :
Enter the limit.
10
0 1 1 2 3 5 8 13 21 34 55 89 
*/