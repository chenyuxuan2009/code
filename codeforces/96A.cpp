#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	if(a.find("0000000")!=-1||a.find("1111111")!=-1)
	{
		cout<<"YES"; 
	} 
	else
	{
		cout<<"NO";
	}
	return 0;
}


