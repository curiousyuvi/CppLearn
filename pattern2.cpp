#include<iostream>
using namespace std;
int main(){
    int i,x,row,column;5
    cout<<"Enter no. of rows:"<<endl;
    cin>>row;
    cout<<"Enter no. of columns:"<<endl;
    cin>>column;
    
    
    for(i=0;i<row;i++) 
    {
        if(i==0 || i==(row-1))
        {
            for(x=0;x<column;x++)
        cout<<"*";
        cout<<endl;
        }
        
        else{
            cout<<"*";
            for(x=0;x<(column-2);x++)
             cout<<" ";
             cout<<"*";
             cout<<endl;
             }
    }
    return 0;
}