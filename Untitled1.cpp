#include<iostream>
#include<cstdio>
using namespace std;

string c,s;
int ans;

int main()
{
	cin>>s;
	while(c!="\n")
	{
		cin>>c;
		if(c==s)
		  ans++;
	}
	cout<<ans;
	return 0;
}
