#include<iostream>
using namespace std;

int oddrpt(int a[],int n)
{
    int r;
    for(int i=0;i<n;i++)
        r=r^a[i];
    return r;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<oddrpt(a,n);
}