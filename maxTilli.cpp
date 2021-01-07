#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int ar[n];
  for(int i=0;i<n;i++)
  {
      int max=INT_MIN;
      for(int j=0;j<=i;j++)
      {
          
          if(a[j]>max)
          max=a[j];
      }
      ar[i]=max;
  }
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" "; 
  cout<<endl;
  return 0;



}

