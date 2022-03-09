#include<iostream>
using namespace std;

void kthbit(int n,int k)
{
   //Right Shift if((n>>(k-1) & 1)!=0)
    if((n>>(k) & 1)!=0)
        cout<<"Yes";
    else    
        cout<<"No";
}


int main()
{
    int n,k;
    cin>>n>>k;
    kthbit(n,k);

}