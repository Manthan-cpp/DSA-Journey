#include <iostream>
using namespace std;
int main()
{
    int a, b = 0;
    cout << "Enter the amount\n";
    cin >> a;
    switch (1)
    {
    case 1:
    {
        b = a / 100;
        cout << "Number of 100 rs notes : " << b << endl;
        a = a % 100;
    }
    case 2:
    {
        b= a/20;
        cout<<"Number of 20 rs notes : "<<b<<endl;
        a=a%20;
    }
    case 3:
    {
        b=a/1;
        cout<<"Number of 1 rs notes : "<<b<<endl;
        break;
    }
    default:
        cout << "Invalid Input\n";
        break;
    }
}
/*
Output :
Enter the amount
1326
Number of 100 rs notes : 13
Number of 20 rs notes : 1
Number of 1 rs notes : 6
*/