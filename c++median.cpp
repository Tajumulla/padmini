#include<iostream>
using namespace std;
int  main()
{
	int i,j,temp;
	int ar[3];
	cout<<"enter the values:";
	for(i=0;i<3;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(ar[i]>ar[j])
          {
          	temp=ar[i];
          	ar[i]=ar[j];
          	ar[j]=temp;
		  }
		}
	}
	cout<<"median="<<ar[1];
	return 0;
}
