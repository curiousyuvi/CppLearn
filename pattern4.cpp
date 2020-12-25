#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    
    for(i=n;i>=1;i--)
    {
        for(x=1;x<=i;x++)
        {
            cout<<"*";
            
        }
        
    cout<<endl;
    }
    return 0;
}