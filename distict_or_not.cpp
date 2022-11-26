#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"no"<<endl;
        else cout<<"yes"<<endl;



    }



    return 0;
}

