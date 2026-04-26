#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1, space;
    char c = 'A';
    cin >> m;
    n = m;
    while (i <= m)
    {
        j = 1;

        while (j <= n)
        {
            cout << '*';
            j++;
        }
        /*alternate : while (space <= (i - 1))
        {
            cout << " ";
            space++;
        }*/
        cout << "\n";
        i++;
        n--;
    }
}
/*
****
***
**
*
*/