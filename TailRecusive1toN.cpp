#include<iostream>
using namespace std;

void printn(int n,int k)
{
    if(n==0) return;
    cout<<k<<" ";
    printn(n-1,k+1);
}


int main()
{
    int n,k=1;
    cin>>n;
    printn(n,k);
}