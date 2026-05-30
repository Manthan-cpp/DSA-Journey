#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of array : ";
    cin >> n;
    cout<<"Enter the array : ";
    int a[1000];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int freq[1000];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        bool visited = false;

        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                visited = true;
                break;
            }
        }

        if(visited)
            continue;

        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        freq[k++] = count;
    }

    for(int i = 0; i < k; i++)
    {
        for(int j = i + 1; j < k; j++)
        {
            if(freq[i] == freq[j])
            {
                cout << "False";
                return 0;
            }
        }
    }

    cout << "True";
}
/*
Output :
Enter the length of array : 6
Enter the array : 1 1 1 2 2 3
True
*/