#include<bits/stdc++.h>
using namespace std;
int n,a,c,x,m,r=-1;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a;
		c=c+a;
		x=x+1-a*2;
		r=max(r,x-m);
		m=min(x,m);
	}
	cout<<r+c;
	return 0;
}


