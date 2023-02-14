#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        int x;
        cin>>x;
        cout<<"case "<<i<<": ";
        for(int i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;



    }

    return 0;
}
