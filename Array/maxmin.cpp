#include <iostream>
using namespace std;
void MinMax()
{
    // int min=0,max=0;
    int arr[3][3];
    cout << "Enter the array\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"Your Array : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] <= min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum Value = " << min << endl;
    cout << "Maximum Value = " << max << endl;
}
int main()
{
    MinMax();
}
/*
Output :
Your Array : 
12 65 34
-8 -46 10
38 -34 45
Minimum Value = -46
Maximum Value = 65
*/