#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1;
    char c = 'A';
    cin >> m ;
    while (i <= m)
    {
        j = 1;
        while (j <= i)
        {
            c='A'-i+j+3;
            cout << c << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
}
/*
D 
C D
B C D
A B C D
*/