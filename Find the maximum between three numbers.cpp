#include<bits/stdc++.h>
using namespace std;
int main() { 
    long long int a,b,c;
    cout<<"Enter Three Number:"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c) {
        cout<<a<<" is the largest"<<endl;
    }
    else if(b>c) {
        cout<<b<<" is the largest"<<endl;
    }
    else
    {cout<<c<<" is the largest"<<endl;}
    return 0;
}
