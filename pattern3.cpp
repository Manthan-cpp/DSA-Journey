#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1;
    cin >> m;
    while (i <= m)
    {
        j = i;
        while (j >= 1)
        {
            cout << j<<" ";
            count++;
            j--;
        }
        cout << "\n";
        i++;
    }
}
/*
1 
2 1 
3 2 1 
*/