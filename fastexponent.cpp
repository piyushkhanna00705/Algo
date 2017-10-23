#include<bits/stdc++.h>
using namespace std;
int fastpow(int a, int n)
{
if(n==0)
return 1;
else if(n & 1)
return a*fastpow(a,n-1);
else
{
	int y=fastpow(a,n/2);
	return y*y;
}
}
	

int main()
{
	int base;
	cin>>base;
	int power;
	cin>>power;
	cout<<fastpow(base,power)<<endl;
	
}
