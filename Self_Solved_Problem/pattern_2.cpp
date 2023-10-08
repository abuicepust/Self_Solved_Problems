#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int f=64;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<char(f+i)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

