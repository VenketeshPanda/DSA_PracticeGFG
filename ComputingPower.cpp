#include<iostream>
using namespace std;

int pow(int x,int n)
{
    if(n==0) return 1;
    int t=pow(x,n/2);
    t=t*t;
    if(n%2==0)
        return t;
    else return t*x;
}


int main()
{
    int n,x;
    cin>>x>>n;
    cout<<pow(x,n);
}