#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c;
    cout<<"Enter : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            c=1;
            else
            c=0;

            
            cout<<c<<" ";
        }
        cout<<endl; 