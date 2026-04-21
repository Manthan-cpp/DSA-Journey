#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int i = 0, n, r = 0, rep = 0;
    string s = "";
    cout << "Enter the number \n";
    cin >> n;
    while (n > 0)
    {
        r = n % 2;
        n = n / 2;
        s = to_string(r) + s;
        // rev = (r * pow(10, i)) + rev;
        i++;
    }
    cout << s;
}
