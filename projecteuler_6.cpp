#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long sq=0,s=0;
	for(int i=1;i<=100;i++)
	{
		sq+=i*i;
		s+=i;
		
	}
	long long ans=s*s-sq;
	cout<<ans<<endl;
}