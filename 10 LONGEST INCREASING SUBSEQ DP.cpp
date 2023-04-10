#include<iostream>
using namespace std;
int longest(int arr[],int n){
	int dp[n];
	dp[0] = 1;
	for(int i = 1;i<n;i++) {
		dp[i]=1;
		for(int j=0; j<i; j++) {
			if(arr[j]<arr[i]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	int res = dp[0];
	for(int i =1; i<n;i++) {
		if(res<dp[i]) {
			res = dp[i];
		}
	}
	return res;
}
int main()
{
	int arr[] = {3,4,2,8,10,5,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<longest(arr,n);
}
