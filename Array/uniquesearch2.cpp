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

        int a[n],c=0,g=0,ans=0;
        cout <<"Enter the array :\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int j=0;j<n;j++)
        {
            ans=ans^a[j];
        }
        cout<<"Unique Element : "<<ans;
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
1 3 4 3 1 
Unique Element : 4
*/