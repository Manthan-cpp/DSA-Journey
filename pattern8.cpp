#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1, space;
    char c = 'A';
    cin >> m;
    while (i <= m)
    {
        j = 1;
        space = m - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= i)
        {
            cout << '*';
            j++;
        }
        cout << "\n";
        i++;
    }
}
/*
   *
  **
 ***
****
*/