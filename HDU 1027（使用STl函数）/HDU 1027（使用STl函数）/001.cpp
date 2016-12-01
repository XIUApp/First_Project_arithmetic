#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main ()
{
	int n,m;
	while (cin>>n>>m)
	{
		int k1[1001];
		for (int i=0;i<n;i++)
		{
			k1[i] = i+1;
		}
		for (int i=0;i<m-1;i++)
		{
			next_permutation(k1,k1+n);
		}
		for (int i=0;i<n;i++)
		{
			if (i == n-1)
			{
				cout<<k1[i]<<endl;
			}
			else
			{
				cout<<k1[i]<<" ";
			}
		}
	}
	return 0;
}