#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	if((n-(k-1))%2==1&&n-(k-1)>0)
	{
		puts("YES");
		for(int i=1;i<=k-1;i++)
		{
			cout<<1<<" ";
		}
		cout<<n-(k-1)<<endl;
		return;
	}
	if((n-2*(k-1))%2==0&&n-2*(k-1)>0)
	{
		puts("YES");
		for(int i=1;i<=k-1;i++)
		{
			cout<<2<<" ";
		}
		cout<<n-2*(k-1)<<endl;
		return;
	}
	puts("NO");
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}