#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool>primes(2000000,true);
    long long n=2000000;
    vector<int>prime1;
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i<=sqrt(n);i++)
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
    long long sum=0;
    for(int i=0;i<prime1.size();i++)
    {
        sum+=prime1[i];
    }
    cout<<sum<<endl;
}