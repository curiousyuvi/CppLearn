#include<iostream>
using namespace std;
void sortDescend(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
          if(a[j]<a[j+1])
          {
              int temp;
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return;
}
void sortAscend(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
          if(a[j]>a[j+1])
          {
              int temp;
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
        }
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