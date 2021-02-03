#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int max_cnt=0,cnt=1;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>a[i][j];
		}
	}
    for(int i=0;i<n;i++){
    	for(int j=1;j<m;j++)
    	{
    		if(a[i][j]>a[i][j-1])
    		cnt++;
    		else{
    			max_cnt=max(cnt,max_cnt);
    			cnt=0;
			}
		}
		cnt=0;
		for(int j=m-1;j>1;j--)
    	{
    		if(a[i][j]<a[i][j-1])
    		cnt++;
    		else{
    			max_cnt=max(cnt,max_cnt);
    			cnt=0;
			}
		}
		
	}
	cout<<max_cnt;
}