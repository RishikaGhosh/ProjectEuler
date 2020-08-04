#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n=1000000;
    vector<bool>primes(n,true);
    vector<int>prime1;
    primes[0]=0;
    primes[1]=0;
    for(int i=1;i<=sqrt(n);i++)
    {
    	if(primes[i])
    	{
    		for(int j=2;j*i<=n;j++)
    		{
    			primes[i*j]=false;
    		}
    	}
    }
    for(int i=1;i<=n;i++)
    {
    	if(primes[i])
    	{
    		prime1.push_back(i);
    	}
    }
    for(int i=1;i<prime1.size();i*=10)
    {
    	cout<<prime1[i]<<endl;
    }
    
}