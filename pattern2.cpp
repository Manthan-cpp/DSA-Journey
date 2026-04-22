#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1;
    cin >> m;
    while (i <= m)
    {
        j = 1;
        n = i;
        while (j <= n)
        {
            cout << count<<" ";
            count++;
            j++;
        }
        cout << "\n";
        i++;
    }
}
/*
1
2 3
4 5 6
*/