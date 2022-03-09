#include<iostream>
using namespace std;

void countOdd(int a[],int n)
{
    int x=0,c1=0,c2=0;    
    for(int i=0;i<n;i++) x=x^a[i];
    int s= x & (~(x-1));
    for(int i=0;i<n;i++)
    {
        if((a[i]&s)!=0)
            c1=c1^a[i];
        else    
            c2=c2^a[i];
    }
       
   cout<<c1<<" "<<c2;
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    countOdd(a,n);
}