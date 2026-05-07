#include <iostream>
using namespace std;
int sqrt(int n)
{
    int e, s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    e = n - 1;
    s = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[mid] * a[mid] > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return a[e];
}
void pre(int n, int temp, int pres)
{
    double tem = temp;
    double factor = 1;
    for (int i = 0; i < pres; i++)
    {
        factor = factor / 10;
        for (int j = 0; j < n; j++)
        {
            if ((tem + factor) * (tem + factor) < n)
            {
                tem += factor;
            }
        }
    }
    cout << "Square Root : " << tem;
}
int main()
{
    int n, pres;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the decimal places : ";
    cin >> pres;
    int temp = sqrt(n);
    pre(n, temp, pres);
}
/*Output : 
Enter the number : 37
Enter the decimal places : 3
Square Root : 6.082
*/