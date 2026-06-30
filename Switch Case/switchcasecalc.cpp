#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the first number\n ";
    cin >> a;
    cout << "Enter the second number\n ";
    cin >> b;
    cout << "Enter the operation\n";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;

    default:
        cout << "Invalid Input\n";
        break;
    }
}