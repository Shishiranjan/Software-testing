#include<bits/stdc++.h>
using namespace std;

int t[5][2];
int a[3],b[3];
int a1,a2,b1,b2;

void equi_val()
{

	a[0]=a1-1,a[1]=a2+1,a[2]=(rand()%(a2-a1+1))+a1;
	b[0]=b1-1,b[1]=b2+1,b[2]=(rand()%(b2-b1+1))+b1;
	
	int i=0;
	while(i<2)
	{
		t[i][0]=a[i];
		t[i][1]=b[2];
		i++;
	}
	while(i<4)
	{
		t[i][0]=a[2];
		t[i][1]=b[i-2];
		i++;
	}
	
	t[i][0]=a[2];
	t[i][1]=b[2];
}
int gcd(int x[])
{
	cout<<"\n The numbers are "<<x[0]<<" "<<x[1];
	
	if(x[0]<a1||x[0]>a2||x[1]<b1||x[1]>b2)
	{
		cout<<"\n Invalid Input";
		return -1;
	}
	
	int s,ans;
	if(x[0]<=x[1])
	{
		s=x[0];
	}
	else
	{
		s=x[1];
	}
	
	for(int i=1;i<=s;i++)
	{
		if((x[0]%i==0) && (x[1]%i==0))
		{
			ans=i;
		}
	}
	return ans;
}
int main()
{
	cout<<"Enter the range of first variable ";
	cin>>a1>>a2;
	cout<<"\n Enter the range of second variable ";
	cin>>b1>>b2;
	
	equi_val();
	
	for(int i=0;i<5;i++)
	{
		int k=gcd(t[i]);
		if(k==-1)
		continue;
		else
		cout<<"\n The gcd is "<<k;
		cout<<endl;
	}
}

