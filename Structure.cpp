#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Student{
  public:
  int roll;
  string name;
  string hobby;

};
int main()
{
    ll n;
    cin>>n;
    Student s[100005];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].roll;
        cin>>s[i].name;
        cin>>s[i].hobby;
    }
    cout<<"roll\tname\thobby"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].hobby<<endl;
    }



    return 0;
}
