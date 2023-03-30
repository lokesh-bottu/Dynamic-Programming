#include<iostream>
#include<string.h>
using namespace std;
int countways(int coins[],int n,int sum){
	if(sum==0) 
		return 1;
	if(sum<0)
		return 0;
	if(n==0)
		return 0;
	return countways(coins,n,sum - coins[n-1]) + countways(coins,n-1,sum);
}
int main()
{
	int arr[]={1,2,3,4};
	cout<<countways(arr,sizeof(arr)/sizeof(arr[0]),10);
}


//time complexity 2^n
