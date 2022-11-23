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
        if(n<2)
        {
            cout<<"no"<<endl;
        }
        else if(n<=3){
            cout<<"yes"<<endl;
        }
        else if(n%2==0)
        {
            cout<<"no"<<endl;
        }
        else{
        ll flag=0;
        for(int i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                flag=1;
            }

        }
        if(flag==1) cout<<"no"<<endl;
        else cout<<"yes"<<endl;

        }
    }


    return 0;
}
