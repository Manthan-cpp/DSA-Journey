#include <iostream>
using namespace std;
int main()
{
    int i, n, j, s;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n], c = 0, g = 0;
    cout << "Enter the array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the sumyou are looking for : ";
    cin >> s;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k]== s)
                {
                    cout << "Triplets : " << a[i] << " + " << a[j] << " + " << a[k] << endl;
                }
            }
        }
    }
}
/*
Output :
Enter the number of elements : 9
Enter the array :
1 2 3 4 5 6 7 8 9 
Enter the sumyou are looking for : 9
Triplets : 1 + 2 + 6
Triplets : 1 + 3 + 5
Triplets : 2 + 3 + 4
*/