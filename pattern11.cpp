#include <iostream>
using namespace std;
int main()
{
    int n, m, j, i = 1, count = 1, space;
    char c = 'A';
    cin >> m;
    while (i <= m)
    {
        space = 1;
        while (space <= (m - i))
        {
            cout << " ";
            space++;
        }
        count = 1;
        j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        count=i-1;
        while(count>0)
        {
            cout<<count;
            count--;
        }
        
        /*alternative : j = 1;
        count--;ṇ
        while (j < i)
        {
            count--;
            cout << count;
            j++;
        }*/
        cout << endl;
        i++;
    }
}
/*
   1
  121
 12321
1234321
*/