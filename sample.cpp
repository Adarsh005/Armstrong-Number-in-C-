#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"ARMSTRONG NUMBER"<<endl;
	long long int n,r;
	cin>>n;
	int temp=n;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		int j=i;
			int count = (int) log10(j) + 1;
	while(j>0)
	{
		r = j%10;
		sum = sum+ pow(r,count);
		j=j/10;
	//	cout<<sum<<endl;
	}
	if(sum==i)
	{
		cout<<i<<endl;
	}
}
}
