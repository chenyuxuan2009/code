#include<iostream>
using namespace std;int main(){int n;cin>>n;cout<<max(n,max(((n/100)*10+n%10),n/10));}
