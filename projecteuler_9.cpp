/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool found=false;
    int a,b,c=0,s=1000;
    for(a=0;a<s/3;a++)
    {
        for(b=0;b<s/2;b++)
        {
            c=s-a-b;
            if(a*a+b*b==c*c)         
    
             {
                 found=true;
                 break;
             }
        }
        if(found)
        break;
    }
    cout<<a<<" "<<b<<" "<<c;
    cout<<endl;
    cout<<a*b*c<<endl;
}