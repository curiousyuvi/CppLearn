#include<iostream>
using namespace std;
int main(){
    int i,x,row,column;
    cout<<"Enter no. of rows:"<<endl;
    cin>>row;
    cout<<"Enter no. of columns:"<<endl;
    cin>>column;
    
    for(i=0;i<row;i++)
    {
        for(x=0;x<column;x++) 
        cout<<"*";
        cout<<endl;
        cin>>x;
    }
    return 0;

    
}
