#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> bubbleSort(vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    return a;
}
int main()
{
    int n1, n2, temp;
    cout << "Enter the size of first array : ";
    cin >> n1;
    vector<int> a1;
    cout << "Enter the first array :\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> temp;
        a1.push_back(temp);
    }
    cout << "Enter the size of second array : ";
    cin >> n2;
    int a2[n2];
    cout << "Enter the second array : \n";
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
        a1.push_back(a2[i]);
    }
    cout << "Merged Array : \n";
    for (int x : a1)
    {
        cout << x << " ";
    }
    cout << endl;
    a1 = bubbleSort(a1, n1 + n2);
    cout << "Sorted Array : \n";
    for (int x : a1)
    {
        cout << x << " ";
    }
}
/*
Output :
Enter the size of first array : 5
Enter the first array :
1 3 5 7 9
Enter the size of second array : 4
Enter the second array :
2 4 6 8
Merged Array :
1 3 5 7 9 2 4 6 8
Sorted Array :
1 2 3 4 5 6 7 8 9
*/