#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1;
    cin >> m;
    while (i <= m)
    {
        j = 1;
        count = i;
        while (j <= i)
        {
            cout << count << " ";
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
3 4 5 
*/