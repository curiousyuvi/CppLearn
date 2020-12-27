#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ma=a[0],mi=a[0];
    for(int i=1;i<n;i++)
    {
       
        ma=max(ma,a[i]);
       
        mi=min(mi,a[i]);

    }
    cout<<"max="<<ma<<" min="<<mi;
    return 0;

}