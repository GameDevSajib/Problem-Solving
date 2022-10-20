#include<bits/stdc++.h>
using namespace std;
///gcd er jonno
int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);

}
///factorial er jonno
int fact(int N)
{
    if(N==0) return 1;
    return N*fact(N-1);
}
///fibonacce number er jonno;
int fib(int m)
{
    if(m<=1) return m;
    return fib(m-1)+fib(m-2);

}

int main()
{
    int a,b,lcm,N,m;
    cin>>a>>b;
    int x=gcd(a,b);
    cout<<x<<endl;
    cout<<((a*b)/x)<<endl;
    cin>>N;
    cout<<fact(N)<<endl;
    cin>>m;
    cout<<fib(m)<<endl;

    int n;
    cin >> n;

    int k[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> k[i];
    }

    int g = k[1];
    ////n sonkok sokahar gcd
    for(int i = 2; i <= n; i++) {
        g = gcd(g, k[i]);
    }

    cout << g << endl;

    return 0;
}