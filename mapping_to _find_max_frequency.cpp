#include<bits/stdc++.h>
using namespace std;
int main()
{
	int z=-10,y=0;
	map<int,int>m;
	int arr[12]={1,1,1,4,4,7,7,7,2,2,2,2};
	for(int i=0;i<12;i++)
	{
		m[arr[i]]++;
	}
	for(auto i:m)
	{
		if(i.second>z)
		{
			y=i.first;
			z=i.second;
		}
	}
	cout<<y<<endl;
}
