#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n=600851475143;
	int largest=0;
	bool isprime;
	for(long long i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			isprime=true;
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					isprime=false;
					break;
				}
			}
			if(isprime)
			{
				largest=i;
			}
		}
	}
	cout<<largest<<endl;
}