#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }

    // Another way to do this but this is not a right approach.
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=2*i-1;j+=2)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
}