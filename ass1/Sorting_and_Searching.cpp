#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int x);

void Union(int arr1[], int arr2[], int m, int n)
{
    
    if (m > n) {
        int* tempp = arr1;
        arr1 = arr2;
        arr2 = tempp;
 
        int temp = m;
        m = n;
        n = temp;
    }
 
    sort(arr1, arr1 + m);
    for (int i = 0; i < m; i++)
        cout << arr1[i] << " ";
 
   
    for (int i = 0; i < n; i++)
        if (binarySearch(arr1, 0, m - 1, arr2[i]) == -1)
            cout << arr2[i] << " ";
}

 

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 
int main()
{
    int n, m;
    cin>>n>>m;
    int set1[n],set2[m];
    for(int i=0;i<n;i++)
    cin>>set1[i];
    for(int i=0;i<m;i++)
    cin>>set2[i];
    Union(set1, set2, n, m);
    return 0;
}
