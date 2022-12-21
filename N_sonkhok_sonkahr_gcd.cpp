
#include<bits/stdc++.h>
#define ll long long
using namespace std;
///recursion ber kora
int gcd(int a,int b)
{
    if(b==0) return a;
    else{
           return gcd(b,a%b);
        }
}
///n sonkok sonkhar gcd
int findGCD(int arr[],int n)
{
    int result=arr[0];
    for(int i=1;i<n;i++)
    {
        result=gcd(arr[i],result);

        if(result==1)
        {
            return 1;
        }
    }
    return result;
}
int main()
{
    ll a,b,x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findGCD(arr,n)<<endl;
    return 0;
}
