#include<iostream>
using namespace std;
void sortDescend(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(a[j]<current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        } 
        a[j+1]=current;
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
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
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