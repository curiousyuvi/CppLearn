#include<iostream>
#include<climits>
using namespace std;
void sortDescend(int a[],int n)
{
    
    
     for(int i=0;i<n-1;i++)
    {

        int temp;
        for(int j=i+1;j<n;j++)
        {   
            if(a[j]>a[i])
            {
             temp=a[j];
             a[j]=a[i];
             a[i]=temp;
             
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
    
    
    for(int i=0;i<n-1;i++)
    {

        int temp;
        for(int j=i+1;j<n;j++)
        {   
            if(a[j]<a[i])
            {
             temp=a[j];
             a[j]=a[i];
             a[i]=temp;
             
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