//g04_daa_code_asg4

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter The Size of Array: ";
	cin>>n;
	int array[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=1;i<n;i++){
		if(array[i]==array[i-1])
		{
			cout<<array[i]<<"\n";
			break;
		}
		else
		{
			continue;
		}
	}
	return 0;
}
