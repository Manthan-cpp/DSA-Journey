#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1;
    char c = 'A';
    cin >> m >> n;
    while (i <= m)
    {
        j = 1;
        while (j <= n)
        {
            cout << c << " ";
            j++;
        }
        cout << "\n";
        c++;
        i++;
    }
}
/*
A A A 
B B B 
C C C 
*/