#include <bits/stdc++.h>
using namespace std;

long long power(long long a,long long b){
    long long r=1;
    while(b){
        if(b&1) r*=a;
        a*=a;
        b>>=1;
    }
    return r;
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<power(a,b);
}
