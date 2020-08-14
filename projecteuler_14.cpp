#include<bits/stdc++.h>
using namespace std;
long long sequence(long long n)
{
	long long result=0;
	while(n!=1)
	{
		n=(n%2==0)?n/2:n*3+1;
		result++;
	}
	return result;
}
int main()
{
	long long num=0;
	long long chain=0;
	for(int i=1;i<1000000;i++)
	{
		long long current=sequence(i);
		if(current>chain)
		{
			chain=current;
			num=i;
		}
	}
	cout<<num<<endl;
}