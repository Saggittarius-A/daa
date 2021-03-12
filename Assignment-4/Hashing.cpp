#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter The Size of Array: ";
	cin>>n;
	int array[n];
	map<int,int>mp;
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=1;i<n;i++){
		if(mp[array[i]]==0)
		{
			mp[array[i]]=1;
		}
		else
		{
			cout<<array[i];
			break;
		}
	}
	return 0;
}
