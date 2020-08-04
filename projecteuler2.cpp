#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fib3=2;
	int fib6=0;
	int result=2;
	int sum=0;
	while(result<4000000)
	{
        sum+=result;
        result=4*fib3+fib6;
        fib6=fib3;
        fib3=result;
	}
	cout<<sum;
}