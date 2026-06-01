#include <iostream>
using namespace std;
int sum()
{
    int arr[3][3];
    cout<<"Enter the array\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
int main()
{
    
    cout<<"Sum = "<< sum();
}
/*
Output :
Enter the array
1 2 3 
4 5 6 
7 8 9 
Sum = 45
*/