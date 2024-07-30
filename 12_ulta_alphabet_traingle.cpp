#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    //  it will print like A B C D 
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    // It will print like this A A A A A
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}