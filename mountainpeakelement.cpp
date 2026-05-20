#include <iostream>
using namespace std;
void peak()
{
    int n, s, j = 0, e, key, mid, ans = 0, ans2 = 0, f = 0;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter the mountain array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (j < n)
    {
        if (a[j] < a[j + 1] && a[j + 1] > a[j + 2])
        {
            ans = a[j + 1];
            break;
        }
        else
        {
            j++;
        }
    }
    cout << "Peak ELement : " << ans;
}
int main()
{
    peak();
}
/*
Output :
Enter the number of elements : 7
Enter the mountain array :
1 2 3 4 5 4 2 
Peak ELement : 5
*/
