#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int set1[n],set2[m];
	for(int i=0;i<n;i++)
	{
		cin>>set1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>set2[i];
	}
	int i,j;
	for(i=0;i<n;i++)
		printf("%d ",set1[i]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(set2[i]==set1[j])
				break;
		if(j==n)
			printf("%d ",set2[i]);
	}
	printf("\n");
}

