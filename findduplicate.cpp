#include <iostream>
using namespace std;    
int duplicate()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n], c = 0, g = 0;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    // cout<<ans<<endl;
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate Number : " << ans << endl;
}
int main()
{
    duplicate();
}
/*
Output :
Enter the number of elements : 9
Enter the array :
8 7 3 4 5 6 2 1 3
Duplicate Number : 3
*/