#include<bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;
int main()
{
	int n,m,i,j;
	cout<<"Enter size of first heap:"<<endl;
	cin>>n;
	cout<<"Enter size of second heap:"<<endl;
	cin>>m;
	vector<int>v(n),w(m),hp;
	cout<<"Enter elements first heap:"<<endl;
	for(i=0;i<n;i++)
		cin>>v[i];
	cout<<"Enter elements second heap:"<<endl;
	for(i=0;i<m;i++)
		cin>>w[i];
	auto start = high_resolution_clock::now();
	i=0;
	j=0;
	while(i<n&&j<m)
	{
		if(v[i]>=w[j])
		{
			hp.push_back(v[i]);
			i++;
		}
		if(w[j]>v[i])
		{
			hp.push_back(w[j]);
			j++;
		}
	}
	while(i<n)
	{
		hp.push_back(v[i]);
		i++;
	}
	while(j<m)
	{
		hp.push_back(w[j]);
		j++;
	}
	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
	cout<<"Required max heap:"<<endl;
	for(i=0;i<hp.size();i++)
		cout<<hp[i]<<" ";
	cout<<endl;
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
}
