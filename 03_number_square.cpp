#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}