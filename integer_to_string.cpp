///integer to string (here factorial value is being added)
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void sajib(char str[],int num){
    int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';

}


int fact(ll n)
{
    if(n<=0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    char str[100005];
    ll n,y;
    cin>>n;
    ll ans=fact(n);
    sajib(str,ans);
    cout<<str<<endl;






    return 0;
}


