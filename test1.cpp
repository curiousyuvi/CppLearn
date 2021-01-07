#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(j==2)
            goto outer;
        }
        outer :
        break;
    }
    return 0;
    
}