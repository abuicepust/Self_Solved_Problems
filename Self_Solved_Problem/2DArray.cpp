#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Please enter the number of array arr[n1][n2]: ";
    cin>>n1;
    cin>>n2;
    int arr[n1][n2];
    cout<<"Enter the elements: ";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Elements are: "<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
