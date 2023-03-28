#include<iostream>
#include<string.h>
using namespace std;
int arr[100];
int fib(int n)
{
	int value;
	if(arr[n]== -1) {
		if(n==0 || n==1)
	    	value = n;
	    else
	    	value = fib(n-1)+fib(n-2);
	    return value;
	}
	return arr[n];	
}
int main()
{
	memset(arr,-1,sizeof(arr));
	cout<<fib(6);
}



