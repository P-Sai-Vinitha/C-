#include<iostream>
using namespace std;
int fibi(int n)
{
	if(n==0 ||n==1 )
	{
		return n;
	}
	return fibi(n-2)+fibi(n-1);	
	
}
int main()
{
	int n,c=0;
	cin>>n;
	cout<<fibi(n);
}
