#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"Hello";
    pair<int,string> n;
    n = make_pair(1,"string");
    cout<<n.first<<endl<<n.second;
    pair<int,string> p = n;
    p.first = 86;
    cout<<"\n"<<p.first<<endl<<p.second;

}