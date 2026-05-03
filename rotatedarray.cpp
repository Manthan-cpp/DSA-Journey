#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, i, t;
    cout << "Enter the number of elements : ";
    cin >> n;
    int temp[n];
    vector<int> a;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    int k;
    cout << "Enter the number of times to rotate : ";
    cin >> k;
    for (i = 0; i < a.size(); i++)
    {
        temp[(i + k) % a.size()] = a[i];
    }
    cout << "Rotated Array \n";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}
/*
Output :
Enter the number of elements : 5
Enter the array :
1 2 3 4 5 
Enter the number of times to rotate : 3
Rotated Array 
3 4 5 1 2
*/
