#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cout<<"Please enter the number of array arr[n1][n2]: ";
    cin>>n1;
    int arr[n1];
    cout<<"Enter the elements: ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements are: "<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
