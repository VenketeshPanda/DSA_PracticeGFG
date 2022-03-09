#include<iostream>
using namespace std;

void div(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    cout<<
    for(i=i-1;i>=1;i--)
    {
        if(n%i==0)
            cout<<n/i<<" ";
    }

    
}


int main()
{
    int n;
    cin>>n;
    div(n);
}