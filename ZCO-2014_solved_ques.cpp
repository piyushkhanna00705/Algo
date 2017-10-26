/*
Zonal Computing Olympiad 2014, 30 Nov 2013

You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.

You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.

For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.

Input format
Line 1 : N, the total number of potential customers.

Lines 2 to N+1: Each line has the budget of a potential customer.

Output format
The output consists of a single integer, the maximum possible revenue you can earn from selling your app.

Sample Input 1
4
30
20
53
14

Sample Output 1
60
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,*arr;
	cin>>t;

	long long int max=0;
	arr=new long long int[t];
	
		for(long long int i=0;i<t;i++)
		cin>>arr[i];
		sort(arr,arr+t);      //sort() time complexity=O(nlogn)
		max=(arr[0])*t;
		for(long long int i=0;i<t;i++)
		{
			if(max<(arr[i])*(t-i) )
				max=(arr[i])*(t-i);
			
			
			
		}
		
		
		
		cout<<max<<endl;
		
	return 0;
}
