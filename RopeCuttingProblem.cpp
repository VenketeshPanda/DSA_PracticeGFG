#include<iostream>
using namespace std;
int mp(int n, int a, int b, int c)
{
    if(n==0) return 0;
    if(n<0) return -1;

    int r=max(mp(n-a,a,b,c), max(mp(n-b,a,b,c), mp(n-c,a,b,c)));

    if(r==-1) return -1;
    return r+1;

}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<mp(n,a,b,c);
}
