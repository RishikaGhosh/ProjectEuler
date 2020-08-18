#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row=15;
	vector<int>last(1);
	cin>>last[0];
	for(int r=1;r<row;r++)
	{
		int ele=r+1;
		vector<int>curr;
		for(int col=0;col<ele;col++)
		{
			int x;
			cin>>x;
			int left=0;
			if(col>0)
			{
				left=last[col-1];
			}
			int right=0;
			if(col<last.size())
			{
				right=last[col];
			}
			int sum=x+max(left,right);
			curr.push_back(sum);
		}
		last=curr;
	}
	cout<<*std::max_element(last.begin(),last.end());
}