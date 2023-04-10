#include<iostream>
using namespace std;
int editdistance(string s1, string s2, int m,int n)
{
	int dp[m+1][n+1];
	for(int i =0; i<=n;i++)
		dp[0][i] = i;
	for(int j=0; j<=m ;j++) 
		dp[j][0] = j;
	for(int i=1; i<= m; i++) {
		for(int j =1; j<=n; j++) {
			if (s1[i] == s2[j])
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = 1+  min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
		} 
	}
	return dp[m][n];
}
int main()
{
	string s1 = "cat";
	string s2 = "cut";
	cout<<editdistance(s1,s2,3,3);
}