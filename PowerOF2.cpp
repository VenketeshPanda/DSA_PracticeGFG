#include<iostream>
using namespace std;


bool po2(int n)
{
    if(n==0) 
        return false;
    return((n&(n-1))==0);
}

int main()
{
    int n;
    cin>>n;
    if(po2(n)==1)
        cout<<"Yes";
    else    
        cout<<"No";
}