#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i=20;
    bool ans=true;
    while(ans)
    {
    	for(int j=1;j<=20;j++)
    	{
    		if(i%j!=0)
    		{
    			ans=true;
    			i+=20;
    			break;
    		}
    		else
    		 ans=false;
    	}
    }
    cout<<i<<endl;
}
   