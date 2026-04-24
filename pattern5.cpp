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
            c='A'+i+j-2;
            cout << c << " ";
            //alternative : c++;
            j++;
        }
        cout << "\n";
        // alternative : c=i+'A';
        i++;
    }
}
/*
A B C 
B C D
C D E
*/