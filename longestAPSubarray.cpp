#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
for(int k=1;k<=N;k++)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int l2=2;
for(int i=0;i<n-2;i++)
{
    int j=i+1;
    int l1=2;
    int dif=a[j]-a[i];
    while((a[j+1]-a[j]) == dif)
    {
         l1++;
         j++;
    }  
    l2=max(l1,l2);
    }
    
    cout<<"Case: "<<k<<" : "<<l2<<endl;
}
return 0;
}