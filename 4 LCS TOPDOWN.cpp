#include<iostream>
#include<string.h>
using namespace std;
int arr[100][100];
int lcs(string a,string b,int m,int n)
{
	if(arr[m][n] == -1)
	{
		if (m==0 || n==0)
			arr[m][n] = 0;
		else if (a[m-1] == b[n-1])
			arr[m][n] = 1+ lcs(a,b,m-1,n-1);
		else 
			arr[m][n] = max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
		return arr[m][n];
	}
	return arr[m][n];
}
int main()
{
	string a = "lokesh";
	string b = "saketh";
	int m = a.length();
	int n = b.length();
	memset(arr,-1,sizeof(arr));
	cout<<lcs(a,b,m,n);
}



