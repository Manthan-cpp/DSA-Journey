#include <iostream>
using namespace std;
void search()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    if(n%2==0)
    {
        cout<<"Invalid input \n";
    }
    else{

        int a[n],c=0,g=0;
        cout <<"Enter the array :\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(a[j]==a[i])
                {
                    c++;
                }
            }
            if(c==1)
            {
                cout<<"Unique Number : "<<a[j];
            }
            c=0;
        }
    }
}
int main()
{
    search();
}
/*
Output :
Enter the number of elements : 5
Enter the array :
12 34 12 55 34
Unique Number : 55
*/