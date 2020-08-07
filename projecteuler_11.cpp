#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size=20;
	long long m[size][size];
	long long sum=0,largest=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>m[i][j];
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i+3<size)
			{
				sum=m[i][j]*m[i+1][j] * m[i+2][j] * m[i+3][j];
				if(sum>largest)
				largest=sum;
			}
			if(j+3<size)
			{
				sum=m[i][j]*m[i][j+1] * m[i][j+2] * m[i][j+3];
				if(sum>largest)
				largest=sum;
			}
			if(j+3<size)
			{
				sum=m[i][j]*m[i][j+1] * m[i][j+2] * m[i][j+3];
				if(sum>largest)
				largest=sum;
			}
			if(i+3<size&&j+3<size)
			{
				sum=m[i][j]*m[i+1][j+1]*m[i+2][j+2]*m[i+3][j+3];
				if(sum>largest)
				largest=sum;
			}
			if(i+3<size&&j>=3)
			{
				sum=m[i][j]*m[i+1][j-1]*m[i+2][j-2]*m[i+3][j-3];
				if(sum>largest)
				largest=sum;
			}
			
		}
	}
	cout<<largest<<endl;
}