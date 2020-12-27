#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int k)
{
    int s=0;
    int e=n;
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==k)
        return mid;
        else if(a[mid]<k)
        {
            s=mid+1;
        }
        else{
            
            e=mid-1;
        }
    }

    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    cout<<binarySearch(a,n,k);
   
    return 0;



}