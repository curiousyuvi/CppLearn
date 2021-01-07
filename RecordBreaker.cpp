#include<iostream>
using namespace std;
int  main(){
    int N;
    cin>>N;
    for(int x=1;x<=N;x++)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int r=0;
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                if(j=i-1) 
                {
                   if(i<n-1)
                  {
                  if(a[i]>a[i+1])
                   
                   r++;
                  }
                  else
                  
                  r++;
        
                }
            }
            else
            break;   
        }

        
       
        
    }
    cout<<"Case #"<<x<<":"<<r<<endl;
    }
    return 0;
}