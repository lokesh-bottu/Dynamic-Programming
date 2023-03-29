#include<iostream>
using namespace std;
int lcs(string a,string b)
{
	int m = a.length();
	int n = b.length();
	int arr[m+1][n+1];
	for(int i =0;i<=m;i++)
		arr[i][0]=0;
	for(int i =0;i<=n;i++)
		arr[0][i]=0;
	for(int x=1;x<=m;x++)
	{
		for(int y = 1; y<= n; y++)
		{
			if(a[x-1]==b[y-1])
				arr[x][y]= 1+ arr[x-1][y-1];
			else
				arr[x][y]=max(arr[x-1][y],arr[x][y-1]);
		}	
	}
	return arr[m][n];
}
int main()
{
	string a = "varun";
	string b = "yaswanth";	
	cout<<lcs(a,b);
}
