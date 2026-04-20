#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
void nCr()
{
    int n, r;
    cout << "Enter the value of n and r\n";
    cin >> n >> r;
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    cout << "The Answer Is " << num / den << endl;
}
int main()
{
    nCr();
}
/*
Output :
Enter the value of n and r
8 2
The Anser Is 28
*/