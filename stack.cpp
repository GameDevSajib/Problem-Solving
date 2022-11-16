#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{

    stack<int>s;
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(2);
    
    while((!s.empty()))
    {
        cout<<s.top();
        s.pop();
    }
    
    cout<<endl;


    return 0;
}