#include <iostream>
using namespace std;
void rev()
{
    int arr[3][3];
    cout << "Enter the array\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Your Array :\n" ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Reversed Array :\n";
    for (int i = 2; i >=0; i--)
    {
        for (int j = 2; j >=0; j--)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    rev();
}
/*
Output :
Your Array :
1 2 3
4 5 6
7 8 9
Reversed Array :
9 8 7
6 5 4
3 2 1
*/
