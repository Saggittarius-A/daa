#include <bits/stdc++.h> 
using namespace std; 
  
void maxHeapify(int arr[], int n, int idx) 
{ 
   
    if (idx >= n) 
        return; 
    int l = 2 * idx + 1; 
    int r = 2 * idx + 2; 
    int max; 
    if (l < n && arr[l] > arr[idx]) 
        max = l; 
    else
        max = idx; 
    if (r < n && arr[r] > arr[max]) 
        max = r; 
  
    
    if (max != idx) { 
        swap(arr[max], arr[idx]); 
        maxHeapify(arr, n, max); 
    } 
} 
   
void buildMaxHeap(int arr[], int n) 
{ 
    
    for (int i = n / 2 - 1; i >= 0; i--) 
        maxHeapify(arr, n, i); 
} 
  
 
void mergeHeaps(int merged[], int a[], int b[], 
                int n, int m) 
{ 
    
    for (int i = 0; i < n; i++) 
        merged[i] = a[i]; 
    for (int i = 0; i < m; i++) 
        merged[n + i] = b[i]; 
   
    buildMaxHeap(merged, n + m); 
} 
   
int main() 
{ 
   int n,m;
   cout<<"Enter the size of FIRST Heap :"<<"\n";
   cin>>n;
   cout<<"Enter Elements of first heap: "<<"\n";
   int a[n],b[m];
   for(int i=0;i<n;i++)
   cin>>a[i];
    cout<<"Enter the size of Second Heap"<<"\n";
   cin>>m;
   cout<<"Enter Elements of Second heap"<<"\n";
   for(int j=0;j<m;j++)
   cin>>b[j];
    int merged[m + n]; 
    mergeHeaps(merged, a, b, n, m); 
  
    for (int i = 0; i < n + m; i++) 
        cout << merged[i] << " "; 
  
    return 0; 
} 
