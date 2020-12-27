#include<iostream>
#include<climits>
using namespace std;
void sortDescend(int a[],int n)
{
    
    
    for(int i=0;i<n;i++)
    {   int k;
        int ma=INT_MIN;
        for(int j=i;j<n;j++)
        {
            if(a[j]>ma)
            {
             ma=a[j];
             k=j;
             
            }
        }
        a[k]=a[i];
        a[i]=ma;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return;
  
}
void sortAscend(int a[],int n)
{
    
    int k;
    for(int i=0;i<n;i++)
    {
        int mi=INT_MAX;
        for(int j=i;j<n;j++)
        {   
            if(a[j]<mi)
            {
             mi=a[j];
             k=j;
             
            }
        }
        a[k]=a[i];
        a[i]=mi;
        
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return;
  
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sortAscend(a,n);
    sortDescend(a,n);
    return 0;
}