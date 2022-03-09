#include<iostream>
using namespace std;

int subsum(int a[],int n, int s)
{
    if(n==0) return (s==0)? 1 : 0;
    else    
        return(subsum(a,n-1,s) + subsum(a,n-1,s-a[n-1]));

}
int main()
{
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>s;
    cout<<subsum(a,n,s);
}