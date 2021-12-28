#include<iostream>
using namespace std;
int main()
{
	int a[100],n,sum,i;
	double average;
	cout<<"enter the value of n";
	cin>>n;
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		average=sum/n;
		cout<<"average:"<<average;
		
}
