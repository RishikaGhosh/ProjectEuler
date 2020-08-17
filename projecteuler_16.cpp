#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[500];
	int sum=0;
	a[0]=1;
	for(int i=1;i<500;i++)
	{
		a[i]=0;
	}
	for(int i=1;i<1001;i++)
	{
		a[0]=2*a[0];
		for(int k=1;k<500;k++)
		{
			a[k]=2*a[k]+a[k-1]/10;
		}
		for(int j=0;j<500;j++)
		{
			a[j]=a[j]%10;
		}
	}
	for(int i=0;i<500;i++)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
}