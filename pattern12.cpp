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
        count = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        j = 1;
        while (j < i)
        {
            cout << "*" << " ";
            j++;
        }
        j = 1;
        while (j < i)
        {
            cout << "*" << " ";
            j++;
        }
        j = 1;
        count = n;
        while (count > 0)
        {
            cout << count << " ";
            count--;
        }
        n--;
        cout << endl;
        i++;
    }
}
/*
1234554321
1234**4321
123****321
12******21
1********1
*/