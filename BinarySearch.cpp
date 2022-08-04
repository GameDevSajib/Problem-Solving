#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int key;
    cin>>key;
    int s=0,e=n-1;
    for(;s<=e;5
    )
    {
        int mid=(s+e)/2;
        if(v[mid]==key)
        {
            cout<<mid<<endl;
            break;
        }
        else if(v[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}