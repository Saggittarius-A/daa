#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int max_cnt=0,cnt=1;
    vector<int>v;
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
    		if(a[i][j]>a[i][j-1]){
			cnt++;	
			v.push_back(cnt);
			}
    		else{
    			cnt=1;
			}
		}
		v.push_back(cnt);
		cnt=1;
		
	}
	v.push_back(cnt);
    sort(v.begin(), v.end());
	cout<<v[v.size()-1];
}
