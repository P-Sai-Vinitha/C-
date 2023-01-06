#include<iostream>
using namespace std;
int main()
{
	int c=0,m=-10;
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			c++;
		}
		else
		{
			c=0;
		}
		m=max(m,c);
	}
	cout<<m;
	
}
