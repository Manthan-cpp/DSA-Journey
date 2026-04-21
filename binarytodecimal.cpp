#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0, r = 0, n, a = 0;
    cout << "Enter the number\n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        a = (r * pow(2, i)) + a;
        n = n / 10;
        i++;
    }
    cout << a;
}