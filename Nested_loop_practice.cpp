/*you have given an array.now yor task is to add any arbitary
number(not numbers)  in this array in such a way that
the ans will be 15

your task is which number will be added so that the ans will
be 15

the number range is(0-256) any number

if the suitable ans is not found then print -1

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    int i,j,k,ans=-1;
    ll n;
    cin>>n;
    int a[n+5];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<256;i++)
    {
        ll sum=0;
        for(j=0;j<n;j++)
        {
            sum+=(a[j]+i);
        }
        if(sum==15)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    }

    return 0;
}
