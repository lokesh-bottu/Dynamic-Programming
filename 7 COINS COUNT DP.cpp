#include<iostream>
using namespace std;
int countcoins(int arr[], int n, int sum)
{
	int coins[n+1][sum+1];
	for(int i =0;i<=n;i++)
		coins[i][0] = 1;
	for(int i =1;i<=sum;i++)
		coins[0][i] = 0;
	for(int i =1;i<=n;i++) 
	{
		for(int j =1; j<=sum;j++) 
		{
			coins[i][j] = coins[i-1][j];
			if(arr[i-1]<=j)
			{
				coins[i][j] += coins[i][j-arr[i-1]];
			}
		}
	}	
	return coins[n][sum];
}
int main()
{
	int arr[] = {1,2,3};
	int sum = 4;
	cout<<countcoins(arr,3,sum);
}






// Practice 2
//#include<iostream>
//using namespace std;
//int countways(int arr[],int n,int sum)
//{
//	int coins[n+1][sum+1];
//	for(int i =0;i<=n;i++)
//		coins[i][0]=1;
//	for(int i =1;i<=sum;i++)
//		coins[0][i]=0;
//	for(int i =1;i<=n;i++)
//	{
//		for(int j =0;j<=sum;j++)
//		{
//			coins[i][j]=coins[i-1][j];
//			if(arr[i-1] <= j){
//				coins[i][j] += coins[i][j-arr[i-1]];
//			}
//		}
//	}
//	return coins[n][sum];
//}
//int main()
//{
//	int arr[] = {1,2,3};
//	int sum = 4;
//	cout<<countways(arr,3,sum);
//}
