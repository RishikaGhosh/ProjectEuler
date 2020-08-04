#include<bits/stdc++.h>
using namespace std;
bool ispal(int n)
{
	long long num,digit,rev=0;
	num=n;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num/=10;
	}
	if(n==rev)
	{
		return true;
	}
	else
	   return false;
}
int main()
{
   long long n;
   long long max=0;
   for(int i=999;i>=100;i--)
   {
   	for(int j=999;j>=100;j--)
   	{
   		n=i*j;
   		if(ispal(n)&&n>max)
   		{
   			max=n;
   		}
   	}
   }
   cout<<max<<endl;
}