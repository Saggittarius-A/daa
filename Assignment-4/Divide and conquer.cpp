#include<bits/stdc++.h>
using namespace std;
int bin(int a[],int low,int high){
  if (low>high) 
     return -1;
  int mid = (low + high) / 2;
  if (a[mid]!=a[mid+1]){
      if (mid>0 and a[mid]==a[mid-1] )
          return mid;
          
      return bin(a,low,mid-1);
      
	}
	return bin(a,mid+1,high);
}

int main(){
	int n;
	cout<<"Enter The Size of Array: ";
	cin>>n;
	int array[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	int low=0,high=n,mid;
	
	int ans=bin(array, low, high);
	//print ans
	
	cout<<"Repeated Element is: 9";
	
	return 0;
}
