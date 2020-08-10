#include<bits/stdc++.h>
using namespace std;
int numdiv(long long n);
int main()
{
	long long num=0;
	int i=1;
	while(numdiv(num)<500)
	{
		num+=i;
		i++;
	}
	cout<<num<<endl;
}
int numdiv(long long n)
{
	long long num2=0;
	long long sq=sqrt(n);
	for(int i=1;i<=sq;i++)
	{
		if(n%i==0)
		{
			num2+=2;
		}
	
	}
	if(sq*sq==n)
	{
		num2--;
	}
	return num2;
}