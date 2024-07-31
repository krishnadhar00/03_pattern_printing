// Important Question- Medium level question.
// Inside one loop there is more than one loop. i.e two loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)  // For space printing.
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++)  // For star printing.
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}